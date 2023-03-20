#include <stdio.h>

int main()
{
	float  a = 10.5;
	if (sizeof(a) == sizeof(10.5)) {
		printf("1\n");
	} else {
		printf("2\n");
	}
	printf("%d \n", sizeof(a));
	printf("%d ", sizeof(10.5));//by default considering it as double
	return 0;
}
