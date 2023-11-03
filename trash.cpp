#include <stdio.h>
#include <ctype.h>

int alpha(const char* ptr, int i)
{
    while ((!isalpha(*(ptr + i))) && (*(ptr + i) != '\0'))
    {
        printf("*(ptr + %d) = %c\n", i, *(ptr + i));

        i++;
    }

    return i;
}

int main()
{
    /*char str1[] = "  fgjj";
    char str2[] = "  kfjg";
    int i = 0;
    int j = 0;
    i = alpha(str1, i);
    printf("str1[%d] = %c\n", i, str1[i]);*/
    struct Stack {int* data; char* letter; int count;};

    printf("size of Structptr = %d\n", sizeof(Stack*));
    printf("size of charptr = %d\n", sizeof(char*));
}
