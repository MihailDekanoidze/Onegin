#include <stdio.h>

void charprint(char* ptr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%c (%d)\n", ptr[i], ptr[i]);
    }
}
