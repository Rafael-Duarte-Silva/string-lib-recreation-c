int my_strcoll(const char *str1, const char *str2)
{
    while (*str1 && *str2)
    {
        if (*str1 > *str2)
        {
            return 1;
        }
        else if (*str2 > *str1)
        {
            return -1;
        }

        str1++;
        str2++;
    }

    return 0;
}