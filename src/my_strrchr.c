#include "../include/my_string.h"

char *my_strrchr(char *str, const int character)
{
    const int start = my_strlen(str);

    str += start;
    while (*str)
    {
        if (*str == character)
        {
            return str;
        }

        str--;
    }

    return NULL;
}