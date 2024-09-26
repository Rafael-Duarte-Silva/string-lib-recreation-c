#include "../include/my_string.h"

int my_memcmp(const void *str1, const void *str2, size_t size)
{
    char *charStr1 = (char *)str1;
    char *charStr2 = (char *)str2;

    while (*charStr1 && *charStr2 && size)
    {
        if (*charStr1 > *charStr2)
        {
            return 1;
        }
        else if (*charStr2 > *charStr1)
        {
            return -1;
        }

        charStr1++;
        charStr2++;
        size--;
    }

    return 0;
}