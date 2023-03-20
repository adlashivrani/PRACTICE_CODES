#include <stdio.h>

union {
	int t1;
	int t2;
} myvar = { .t2 = 10 };
int main() 
{
	union myvar;
	printf("%d %d",myvar.t1, myvar.t2);
	return 0;
}
