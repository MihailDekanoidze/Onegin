#include <stdio.h>
#include "mystrcmp.h"

int posmin(char** data, int begin, int length)
{
    int posmin = begin;
    for (int i = begin; i < length; i++)
    {
        if (mystrcmp(data[posmin], data[i]) > 0)
        {
            posmin = i;
        }
    }
    return posmin;
}
