#include "stdio.h"

/* 统计输入的行数 */
int main(int argc, char const *argv[])
{
	
	int c, nl, bl, tal;

	nl =0;
	bl = 0;
	tal = 0;
	while ( (c = getchar()) != EOF) {
		if (c == '\n') 
			++nl;
		if (c == '\t')
			++tal;
		if (c == ' ')
			++bl;
	}
	printf("%d %d %d\n", nl, bl, tal);
	return 0;
}