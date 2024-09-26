#include "../include/my_string.h"

int my_strspn(const void *str, const void *search)
{
    char *charStr = (char *)str;
    char *charSearch = (char *)search;
    const int length = my_strlen(charSearch);
    int i = 0;

    while (*charStr)
    {
        int timesNotFound = 0;

        while (*charSearch)
        {
            if (*charStr != *charSearch)
            {
                timesNotFound++;
            }

            charSearch++;
        }

        if (timesNotFound == length)
        {
            return i;
        }

        charSearch -= length;
        i++;
        charStr++;
    }
}