#include <stdio.h>

#define LOWER 0 
#define UPPER 300
#define STEP 20         /* step size */


/* 打印温度转换表 */

int main(int argc, char const *argv[])
{
	float fahr;
	for (fahr=LOWER; fahr<=UPPER; fahr = fahr + STEP) 
		printf("%6.1f\t%3.0f\n", (5.0/9.0)*(fahr-32),fahr);
	return 0;
}
