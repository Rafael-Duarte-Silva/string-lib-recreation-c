#include "../include/my_string.h"

char *my_strstr(char *str, const char *substring)
{
    const int length = my_strlen(substring);

    while (*str)
    {
        int timesFound = 0;

        while (*substring)
        {
            if (*str == *substring)
            {
                timesFound++;
                str++;
            }
            else
            {
                break;
            }

            substring++;
        }

        if (timesFound == length)
        {
            return str - timesFound;
        }

        substring -= timesFound;
        str -= timesFound;
        str++;
    }

    return NULL;
}