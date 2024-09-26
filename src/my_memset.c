#include "../include/my_string.h"

void *my_memset(void *str, int c, size_t n)
{
    char *charStr = (char *)str;
    char charC = (char)c;

    while (*charStr && n)
    {
        *charStr = charC;

        charStr++;
        n--;
    }
}