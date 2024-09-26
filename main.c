#include <stdio.h>
#include "include/my_string.h"

int main()
{
    char myStr[] = "The rain in Spain falls mainly on the plains";
    char *myPtr = my_strstr(myStr, "ain");
    if (myPtr != NULL)
    {
        printf("%s", myPtr);
    }
    return 0;
}
