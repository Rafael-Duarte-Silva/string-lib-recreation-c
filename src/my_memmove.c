#include "../include/my_string.h"

void *my_memmove(void *dest_str, const void *src_str, size_t numBytes)
{
    char *charDest_str = (char *)dest_str;
    char *charSrc_str = (char *)src_str;

    while (*charDest_str && *charSrc_str && numBytes)
    {
        *charDest_str = *charSrc_str;

        charDest_str++;
        charSrc_str++;
        numBytes--;
    }
}