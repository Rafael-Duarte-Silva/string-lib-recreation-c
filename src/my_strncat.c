#include "../include/my_string.h"

void my_strncat(void *destination, const void *source, size_t size)
{
    char *charDestination = (char *)destination;
    char *charSource = (char *)source;
    const int start = my_strlen(charDestination);

    charDestination += start;
    while (*charDestination && *charSource && size)
    {
        *charDestination = *charSource;

        charDestination++;
        charSource++;
        size--;
    }
}