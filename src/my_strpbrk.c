#include "../include/my_string.h"

void *my_strpbrk(void *str, const void *search)
{
    char *charStr = (char *)str;
    char *charSearch = (char *)search;
    const int length = my_strlen(charSearch);

    while (*charStr)
    {
        while (*charSearch)
        {
            if (*charStr == *charSearch)
            {
                return (void *)charStr;
            }

            charSearch++;
        }

        charSearch -= length;
        charStr++;
    }

    return NULL;
}