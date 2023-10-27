#include <stdio.h>

void swap(const void* elem1, const void* elem2, int size)
{
    for (int byte = 0; byte < size; byte++)
    {
        char buffer = *((char*) elem1 + byte);
        *((char*) elem1 + byte) = *((char*) elem2 + byte);
        *((char*) elem2 + byte) = buffer;
    }
}
