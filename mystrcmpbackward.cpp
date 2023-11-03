#include <stdio.h>
#include <ctype.h>
#include "InputText.h"
#include "ProcessingText.h"
#include "Sorting.h"



int mystrcmpbackward(void* ptr1, void* ptr2)
{
    struct StringInfo* str1 = (struct StringInfo*) ptr1;
    //printf("str1 = %s\n", str1->address);
    struct StringInfo* str2 = (struct StringInfo*) ptr2;
    //printf("str2 = %s\n", str2->address);

    int format = -1;

    int i = str1->size - 2;
    int j = str2->size - 2;

    //printf("i = %d,  j = %d\n", i, j);

    i = alpha(str1, i, format);
    j = alpha(str2, j, format);

    //printf("i = %d,  j = %d\n", i, j);

    for (; (i != 0) && (j != 0); i += format, j+= format)
    {
        if (*(str1->address + i) != *(str2->address + j))
            //printf("i = %d,  j = %d\n", i, j);
            //printf("*(str1->address + i) = %c(%d), *(str2->address + j) = %c(%d)\n", *(str1->address + i), *(str1->address + i), *(str2->address + j), *(str2->address + j));
            return *(str1->address + i) - *(str2->address + j);
    }
    return *(str1->address + i) - *(str2->address + j);
}
