int my_strlen(const char *str)
{
    int length = 0;

    while (*str)
    {
        length++;
        str++;
    }

    return length;
}