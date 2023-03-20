#include <stdio.h>

int main() 
{
	int t[1][2][2] ={ { { 1, 2 },{ 3, 4} } };
	int s = 0;
	int i;
	int j;
	int k;
	for ( i = 1; i > 0; i -= 2) 
		for ( j = 1; j < 2; j += 2)
			for ( k = 0; k < 3; k += 3)
				s += t[k][i-1][j];
	printf("%d", s);
	return 0;
}
