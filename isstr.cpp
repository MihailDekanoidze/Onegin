#include <stdio.h>
#include <ctype.h>

bool isstr(char* begin)
{
    int flag = 0;
    int i = 0;
    while (begin[i] != '\0')
    {
        if ((islower(begin[i])) || (isupper(begin[i])))
            flag = 1;
        i++;
    }
    if (flag)
        return true;
    else
        return false;
}
