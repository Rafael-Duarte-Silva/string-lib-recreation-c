#include "../include/my_string.h"

int my_strcspn(const void *str, const void *search)
{
    char *charStr = (char *)str;
    char *charSearch = (char *)search;
    int i = 0;

    while (*charStr)
    {
        while (*charSearch)
        {
            if (*charStr == *charSearch)
            {
                return i;
            }

            charSearch++;
        }

        i++;
        charStr++;
    }

    return i;
}