#include <stdio.h>
#include "InputText.h"
#include "ProcessingText.h"
#include "Sorting.h"

void bubblesort(void* data, int elemsize, int length, int(*mystrcmp)(void* str1, void* str2))
{
    //printf("I am in bubblesort\n");
    for (int pass = 0; pass < length; pass++)
    {
        int nswaps = 0;
        for (int j = 0; j < length - 1; j++)
        {
            //printf("I am in sorting\n");
            //printf("For str1 = %s and str2 = %s : ", ((StringInfo*)data + j)->address, ((StringInfo*)data + j + 1)->address);
            //printf("mystrcmp(&(data[j]), &(data[j + 1]), format) = %d\n", mystrcmp((void*)((char*)data + j * elemsize), (void*)((char*)data + (j + 1) * elemsize), 1));

            if (mystrcmp((void*)((char*)data + j * elemsize), (void*)((char*)data + (j + 1) * elemsize)) > 0)
            {
                swap((void*) ((char*)data + j * elemsize), (void*) ((char*)data + (j + 1) * elemsize), elemsize);
                nswaps++;
            }
        }
        if (nswaps == 0)
            break;
    }
    //printf("I finished bubblesort\n");
}
