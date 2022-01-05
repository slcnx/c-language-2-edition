
#include <stdio.h>

// lower : convert c to lower case; ASCII only
int lower(int c)
{
    if (c >= '0' && c <= '9')
        return 1;
    else
        return 0;
}

int main()
{
    printf("%d\n", lower('0'));
}