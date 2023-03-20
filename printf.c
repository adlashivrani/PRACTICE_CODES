#include <stdio.h>

int main()
{
	if (printf("0")) {
		printf("inside of if block\n");
	} else {
		printf("inside else\n");
	}
	return 0;
}
