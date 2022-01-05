#include <stdio.h>

int main(void)
{
    int x = 1, y = 2, z[10];
    int *ip;

    ip = &x;
    y = *ip;
    *ip = 0;
    ip = &z[0];
    printf("%d, %d, %d,%d\n", ip, x, y, z);

    return 0;
}
