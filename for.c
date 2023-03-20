#include <stdio.h>

int main()
{
	int x = 1;
	int y = 1;
	for ( ;y; printf("%d %d ", x, y)) {
		y = x++ <= 1;
	}
	return 0;
}
