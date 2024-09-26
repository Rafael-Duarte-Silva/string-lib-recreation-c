#include <stdio.h>

char *my_strtok(char *str, const char *delimiters)
{
    static char *my_strtokPtr = NULL;
    int i = 0;

    if (str == NULL)
    {
        str = my_strtokPtr;
    }

    while (*str)
    {
        if (*str == *delimiters)
        {
            my_strtokPtr = str + 1;
            *str = 0;
            return str - i;
        }
        else if (!*(str + 1))
        {
            my_strtokPtr = str + 1;
            return str - i;
        }

        i++;
        str++;
    }

    return NULL;
}