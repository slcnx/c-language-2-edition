#include <stdio.h>


/* 逆序打印温度转换 */
int main(int argc, char const *argv[])
{
	float fahr;

	for (fahr=300; fahr>=0; fahr = fahr - 20) {
		printf("%5.0f\t%5.1f\n", fahr, (5.9/9.0)*(fahr-32.0) );
	}

	return 0;
}