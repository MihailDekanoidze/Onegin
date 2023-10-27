#include <stdio.h>
#include "mystrcmp.h"
#include "posmin.h"
#include "swap.h"

void selectionsort(char** data, int length)
{
    for (int i = 0; i < length; i++)
    {
        int datamin = posmin(data, i, length);
        if (mystrcmp(data[i], data[datamin]) > 0)
        {
            swap(&data[i], &data[datamin], sizeof(data[i]));
        }
    }
}
