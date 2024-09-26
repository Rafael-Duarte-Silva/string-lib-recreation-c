#include "../include/my_string.h"

void *my_memcpy(void *dest_str, const void *src_str, size_t n)
{
    char *charDest_str = (char *)dest_str;
    char *charSrc_str = (char *)src_str;

    while (*charDest_str && *charSrc_str && n)
    {
        *charDest_str = *charSrc_str;

        charDest_str++;
        charSrc_str++;
        n--;
    }
}