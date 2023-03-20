#include <stdio.h>

int main()
{
	int i = 2048;
	while (i) {
		printf("Learn\n");
		i >>= 1;
	}
	return 0;
}
