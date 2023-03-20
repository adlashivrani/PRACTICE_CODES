#include <stdio.h>
#include <string.h>

int main()
{
	int b;
	int p;
	char str1[] = "soln";
	char str2[] = "solo";
	b = strcmp(str1, str2);
	printf("%d", b);
	return 0;
}
