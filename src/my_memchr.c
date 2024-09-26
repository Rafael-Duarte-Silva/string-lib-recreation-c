#include <stdio.h>

void *my_memchr(void *pointer, const int value, int size)
{
    char *charPointer = (char *)pointer;
    char charValue = (char)value;

    while (*charPointer && size)
    {
        if (*charPointer == charValue)
        {
            return (void *)charPointer;
        }

        charPointer++;
        size--;
    }

    return NULL;
}