#include <stdio.h>

int main()
{
	int j[] = { 10, 20, 30,40 };
	int i = 3;
	int y;
	y = 1*j[--i] + 2*j[--i] + 3*j[--i];//associativity order left to right
	printf("%d", y);
	return 0;
}
