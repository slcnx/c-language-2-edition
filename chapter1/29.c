#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 1, b = 3;
    swap(&a, &b);
    printf("%d, %d\n", a, b);
    return 0;
}

void swap(int *px, int *py)
{
    int temp;
    temp = *px;
    *px = *py;
    *py = temp;
}
