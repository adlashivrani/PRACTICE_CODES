#include <stdio.h>

int thonoi(int , char, char, char);
static int n1 = 0;
static int n2 = 0;

int main()
{
	int num = 3;
	thonoi( num, 'a', 'b', 'c');
	return 0;
}

int thonoi( int num, char a, char b, char c) 
{
	if ( num == 0) {
		return 0;
	} else if ( num == 1) {
		printf("mov disc from %c to %c", a, c);
	} else {
		n1++;	
		printf("\nnum1 ::%d\n", n1);
		thonoi( num - 1, a, c, b);
		//thonoi(1, a, b, c);
		//printf("values after 1 pop:%c %c %c\n", a, c, b);
		n2++;
		printf("\nNum2 ::%d \n", n2);
		thonoi( num - 1, c , b, a);
		//printf("values after 2 pop:%c %c %c\n", c, b, a);
	}
}
