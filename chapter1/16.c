#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20 /* step size */

/* 打印温度转换表 */

float convert(float fahr)
{
    return (5.0 / 9.0) * (fahr - 32);
}

int main(int argc, char const *argv[])
{
    float fahr;
    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
        printf("%6.1f\t%3.0f\n", convert(fahr), fahr);
    return 0;
}
