#include <stdio.h>
#include <TXLib.h>
#include <malloc.h>

#include "InputText.h"
#include "ProcessingText.h"
#include "Sorting.h"


int main()
{
    FILE* fp = fopen("Onegin", "r");

    if (fp == NULL)
    {
        printf("Could not open the file\n");
        return 1;
    }

    struct TextInfo text = {};

    text = InputText(fp);

    fclose(fp);

    struct TextInfo linesinfo = {};

    linesinfo = Lines((char*)text.buffer, text.elemcount);

    struct StingInfo* lines = (struct StingInfo*) linesinfo.buffer;
    int stringcount = linesinfo.elemcount;

    struct TextInfo needsortinfo = {};

    needsortinfo = Needsort((struct StringInfo*)lines, stringcount);

    struct StringInfo* needsort = (struct StringInfo*)needsortinfo.buffer;
    int countsort = needsortinfo.elemcount;

    /*printcmp(&needsort[0], &needsort[1], 1);
    printcmp(&needsort[2], &needsort[2], 1);

    printcmp(&needsort[0], &needsort[1], -1);
    printcmp(&needsort[2], &needsort[2], -1);*/

    bubblesort((void*) needsort, sizeof(needsort[0]), countsort, mystrcmptoward);


    FILE* toward = fopen("OneginSortedToward.txt", "w");

    for (int i = 0; i < countsort; i++)
    {
        fprintf(toward, "%s\n", needsort[i].address);
    }

    fclose(toward);

    bubblesort((void*) needsort, sizeof(needsort[0]), countsort, mystrcmpbackward);

    //selectionsort(needsort, countsort, format);

    FILE* backward = fopen("OneginSortedBackward.txt", "w");

    for (int i = 0; i < countsort; i++)
    {
        fprintf(backward, "%s\n", needsort[i].address);
    }

    fclose(backward);
}
