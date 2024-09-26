#include "../include/my_string.h"

int my_strncmp(const char *str1, const char *str2, size_t n)
{
    while (*str1 && *str2 && n)
    {
        if (*str1 > *str2)
        {
            return 1;
        }
        else if (*str2 > *str1)
        {
            return -1;
        }

        str1++;
        str2++;
        n--;
    }

    return 0;
}