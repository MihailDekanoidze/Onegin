#include <stdio.h>

void swap(const void* elem1, const void* elem2, int size)
{
    for (int byte = 0; byte < size; byte++)
    {
        char buffer = *((char*) elem1 + byte);
        printf("*((char*) elem1 + byte) = %c\n", *((char*) elem1 + byte));
        printf("*((char*) elem2 + byte) = %c\n", *((char*) elem2 + byte));
        printf("buffer = %c\n", buffer);
        *((char*) elem1 + byte) = *((char*) elem2 + byte);
        *((char*) elem2 + byte) = buffer;
        printf("*((char*) elem1 + byte) = %c\n", *((char*) elem1 + byte));
        printf("*((char*) elem2 + byte) = %c\n", *((char*) elem2 + byte));
        printf("buffer = %c\n", buffer);
    }
}

int main()
{
    char elem1[6] = "abcde";
    char elem2[6] = "fghij";
    char* ptr1 = elem1;
    char* ptr2 = elem2;
    int size = sizeof(ptr1);
    swap(ptr1, ptr2, size);
    printf("elem1 = %s\n", elem1);
    printf("elem2 = %s\n", elem2);
}
