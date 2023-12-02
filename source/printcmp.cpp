#include <stdio.h>
#include "../include/ProcessingText.h"
#include "../include/Sorting.h"

void printcmp(struct StringInfo* str1, StringInfo* str2)
{
    int iscmp = 0;
    iscmp = mystrcmptoward(str1, str2);
    if (iscmp > 0)
    {
        printf("str1 = %s > str2 = %s\n", str1->address, str2->address);
    }
    else if (iscmp == 0)
    {
        printf("str1 = %s = str2 = %s\n", str1->address, str2->address);
    }
    else
    {
        printf("str1 = %s < str2 = %s\n", str1->address, str2->address);
    }
}
