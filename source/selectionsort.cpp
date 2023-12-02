#include <stdio.h>
#include "../include/InputText.h"
#include "../include/ProcessingText.h"
#include "../include/Sorting.h"



int posmin(struct StringInfo* data, int begin, int length)
{
    int posmin = begin;
    for (int i = begin; i < length; i++)
    {
        if (mystrcmptoward(&data[posmin], &data[i]) > 0)
        {
            posmin = i;
        }
    }
    return posmin;
}

void selectionsort(struct StringInfo* data, int length)
{
    for (int i = 0; i < length; i++)
    {
        int datamin = posmin(data, i, length);
        if (mystrcmptoward(&data[i], &data[datamin]) > 0)
        {
            swap(&data[i], &data[datamin], sizeof(data[i]));
        }
    }
}
