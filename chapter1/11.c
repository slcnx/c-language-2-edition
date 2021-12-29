#include <stdio.h>

/* 统计输入的字符  */

int main(int argc, char const *argv[])
{
	
	long nc;

	while (getchar() != EOF)
		++nc;
	printf("%ld\n",nc);
	return 0;
}


