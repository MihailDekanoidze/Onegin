#include <stdio.h>
#include "mystrcmp.h"
#include "swap.h"

void bubblesort(char** data, int length)
{
    for (int pass = 0; pass < length; pass++)
    {
        int nswaps = 0;
        for (int j = 0; j < length - 1; j++)
        {
            if (mystrcmp(data[j], data[j + 1]) > 0)
            {
                swap(&data[j], &data[j + 1], sizeof(data[j]));
                nswaps++;
            }
        }
        if (nswaps == 0)
            break;
    }
}
