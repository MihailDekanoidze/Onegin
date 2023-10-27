#include <stdio.h>

int fsize(FILE* file)
{
    rewind(file);
    int begin = 0;
    int end = 0;
    begin = ftell(file);
    fseek(file, 0, SEEK_END);
    end = ftell(file);
    rewind(file);
    return end - begin;
}
