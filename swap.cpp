#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include "InputText.h"
#include "ProcessingText.h"
#include "Sorting.h"

void swap(const void* elem1, const void* elem2, int size)
{
    //printf("elem1 = %s\n", ((StringInfo*)elem1)->address);
    //printf("elem2 = %s\n", ((StringInfo*)elem2)->address);

    /*for (int byte = 0; byte < size; byte++)
    {
        char buffer = *((char*) elem1 + byte);
        *((char*) elem1 + byte) = *((char*) elem2 + byte);
        *((char*) elem2 + byte) = buffer;
    }

    while (size)*/

    int i = 0;

    uint64_t buffer64 = 0;

    for (int i = 0; i < size >> 3; i++)
    {
        printf("ptr elem1 %p\n", elem1);
        printf("ptr elem2 %p\n", elem2);
        memcpy(&buffer64, (char*)elem1, sizeof(uint64_t)); //uint64_t
        *((char*) elem1 + i * sizeof(uint64_t)) = *((char*) elem2 + i * sizeof(uint64_t));
        *((char*) elem2 + i * sizeof(uint64_t)) = buffer64;
    }
    /*size << 3;
    uint32_t buffer32 = 0;
    if ((size >> 2) & 1)
    {
        memcpy(&buffer32, (char*)elem1, sizeof(int32_t));
        *((char*) elem1 + i) = *((char*) elem2 + i);
        *((char*) elem2 + i) = buffer32;
    }
    size << 2;
    uint16_t buffer16 = 0;
    if ((size >> 1) & 1)
    {
        memcpy(&buffer16, (char*)elem1, sizeof(int16_t));
        *((char*) elem1 + i) = *((char*) elem2 + i);
        *((char*) elem2 + i) = buffer16;
    }
    size << 1;
    uint8_t buffer8 = 0;
    if (size & 1)
    {
        memcpy(&buffer8, (char*)elem1 + i, sizeof(uint8_t));
        *((char*) elem1 + i) = *((char*) elem2 + i);
        *((char*) elem2 + i) = buffer8;
    }
    //printf("elem1 = %s\n", ((StringInfo*)elem1)->address);
    //printf("elem2 = %s\n", ((StringInfo*)elem2)->address);*/
}



