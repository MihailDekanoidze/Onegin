#include <stdio.h>
#include "InputText.h"
#include "ProcessingText.h"
#include "Sorting.h"

void swap(const void* elem1, const void* elem2, int size)
{
    //printf("elem1 = %s\n", (char*)elem1);
    //printf("elem2 = %s\n", (char*)elem2);
    for (int byte = 0; byte < size; byte++)
    {
        char buffer = *((char*) elem1 + byte);
        *((char*) elem1 + byte) = *((char*) elem2 + byte);
        *((char*) elem2 + byte) = buffer;
    }
}
