#include <stdio.h>

/*
print the corresponding Celsius to Fahrenheit table.
*/


int main(int argc, char const *argv[])
{
	float celsius, fahr;

	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	while (fahr <= upper) {
		celsius = (fahr - 32) * (5.0/9.0);
		printf("%6.1f\t%3.0f\n", celsius,fahr);
		fahr = fahr	+ step;
	}
	return 0;
	
}