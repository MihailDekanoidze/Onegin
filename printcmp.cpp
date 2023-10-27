#include <stdio.h>
#include "mystrcmp.h"

void printcmp(char* str1, char* str2)
{
    int iscmp = 0;
    iscmp = mystrcmp(str1, str2);
    if (iscmp == 1)
    {
        printf("str1 = %s > str2 = %s\n", str1, str2);
    }
    else if (iscmp == 0)
    {
        printf("str1 = %s = str2 = %s\n", str1, str2);
    }
    else
    {
        printf("str1 = %s < str2 = %s\n", str1, str2);
    }
}
