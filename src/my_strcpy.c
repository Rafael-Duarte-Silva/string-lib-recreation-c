void my_strcpy(char *destination, const char *source)
{
    while (*source)
    {
        *destination = *source;

        source++;
        destination++;
    }
}