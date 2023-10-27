#include <stdio.h>
#include <TXLib.h>
#include <malloc.h>

#include "mystrcmp.h"
#include "swap.h"
#include "posmin.h"
#include "fsize.h"
#include "charprint.h"
#include "isstr.h"
#include "printcmp.h"
#include "selectionsort.h"
#include "bubblesort.h"

int main()
{
    FILE* fp = fopen("Onegin", "r");
    int size = 0;
    size = fsize(fp);
    printf("size = %d\n", size);

    char* buffer = (char*) calloc(size + 1, sizeof(char));
    int char_read = 0;
    char_read = fread(buffer, sizeof(char), size, fp);
    fclose(fp);
    printf("char_read = %d\n", char_read);
    //charprint(buffer, char_read);
    buffer[char_read] = '\0';
    //charprint(buffer, char_read);

    int stringcount = 0;
    for (int i = 0; i < char_read; i++)
    {
        if ((buffer[i] == '\n') || (buffer[i] == '\0'))
            stringcount++;
    }
    printf("stringcount = %d\n", stringcount);

    char** lines = (char**) calloc(stringcount, sizeof(char*));
    int ptrlines = 1;
    lines[0] = buffer;

    for (int i = 0; i < char_read; i++)
    {
        if (buffer[i] == '\n')
        {
            lines[ptrlines] = buffer + i + 1;
            buffer[i] = '\0';
            ptrlines++;
        }
    }

    for (int i = 0; i < stringcount; i++)
    {
        printf("lines[%d] = %p\n", i, lines[i]);
    }

    for (int i = 0; i < stringcount; i++)
    {
        printf("lines[%d] = %s\n", i, *(lines + i));
    }

    int countsort = 0;
    for (int i = 0; i < stringcount; i++)
    {
        if (isstr(lines[i]))
            countsort++;
    }
    printf("countsort = %d\n", countsort);

    char ** needsort = (char**) calloc(countsort, sizeof(char*));
    int strsort = 0;
    for (int i = 0; i < stringcount; i++)
    {
        if (isstr(lines[i]))
        {
            needsort[strsort] = lines[i];
            strsort++;
        }
    }
    for (int i = 0; i < countsort; i++)
    {
        printf("address of {line[%d] = %s} is %p\n", i, needsort[i], needsort[i]);
    }

    for (int i = 0; i < countsort; i++)
    {
        printf("needsort[%d] = %p\n", i, *(needsort + i));
    }

    printcmp(needsort[0], needsort[1]);
    printcmp(needsort[2], needsort[2]);

    //bubblesort(needsort, countsort);
    selectionsort(needsort, countsort);

    for (int i = 0; i < countsort; i++)
    {
        printf("%s\n", needsort[i]);
    }
}
