#include <stdio.h>

char *my_strchr(char *str, const int character)
{
    while (*str)
    {
        if (*str == character)
        {
            return str;
        }

        str++;
    }

    return NULL;
}