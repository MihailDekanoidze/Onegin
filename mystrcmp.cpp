#include <stdio.h>

int mystrcmp(const char * str1, const char * str2)
{
    int i = 0;

    while ((str1[i] != '\0') || (str2[i] != '\0'))
    {
        if (str1[i] != str2[i]) break;

        i++;
    }

    return str1[i] - str2[i];
}