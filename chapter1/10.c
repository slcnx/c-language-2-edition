#include <stdio.h>

int main(int argc, char const *argv[])
{
	int c;
	c = getchar();
	while (c != EOF) {
		putchar(c);
	}
	return 0;
}