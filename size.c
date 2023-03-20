#include <stdio.h>

int main()
{
	char *pchar[2];
	int *pint[2];
	float *pfloat[2];
	printf("%ld %ld %ld", sizeof(pchar), sizeof(pint), sizeof(pfloat) );
	return 0;
}
