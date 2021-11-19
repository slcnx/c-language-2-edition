

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

	celsius = lower;
	while (celsius <= upper) {
		fahr = celsius * (9.0 / 5.0) + 32;
		printf("%f\t%f\n", celsius,fahr);
		lower = lower	+ step;
	}
	return 0;
	
}