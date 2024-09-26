#include "../include/my_string.h"

char *my_strcat(char *destination, const char *source)
{
    const int start = my_strlen(destination);

    destination += start;
    while (*destination && *source && *source)
    {
        *destination = *source;

        source++;
        destination++;
    }
}