#include <stdio.h>

/* 拷贝输入到输出，第1版 */
int main(int argc, char const *argv[])
{
	int c;
	c = getchar();
	while (c != EOF) {
		putchar(c);
		c = getchar();
	}
	return 0;
}