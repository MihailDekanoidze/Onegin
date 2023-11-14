#include <stdio.h>
#include <malloc.h>
#include "InputText.h"

int fsize(FILE* file)
{
    int begin = 0;
    int end = 0;

    begin = ftell(file);
    fseek(file, 0, SEEK_END);
    end = ftell(file);

    return end - begin;
}


struct TextInfo InputText(TextInfo text, FILE* file)
{
    int size = 0;

    size = fsize(file);

    rewind(file);

    printf("size = %d\n", size);

    char* buffer = (char*) calloc(size + 1, sizeof(char));

    int elemcount = 0;
    elemcount = fread(buffer, sizeof(char), size, file);

    /*if (elemcount != size)
    {
        text.buffer = NULL;
        return text;
    }*/

    buffer[elemcount] = '\0';

    text.buffer = buffer;
    text.elemcount = elemcount;

    printf("char_read = %d\n", elemcount);
    //charprint(text);

    return text;
}


void charprint(struct TextInfo text)
{
    int size = text.elemcount;
    char* ptr = (char*) text.buffer;

    for (int i = 0; i < size; i++)
    {
        printf("%c (%d)\n", ptr[i], ptr[i]);
    }
}




