#include "../include/my_string.h"

void my_strncpy(char *destination, const char *source, size_t n)
{
    while (*destination && *source && n)
    {
        *destination = *source;

        destination++;
        source++;
        n--;
    }
}