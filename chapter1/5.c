#include <stdio.h>


/* 逆序打印温度转换 */
int main(int argc, char const *argv[])
{
	float celsius, fahr;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = upper;
	while (fahr >= lower) {	
		celsius = (5.0/9.0) * (fahr - 32.0);
		printf("%4.1f\t%3.0f\n", celsius,fahr);
		fahr = fahr - step;
	}
	return 0;
}