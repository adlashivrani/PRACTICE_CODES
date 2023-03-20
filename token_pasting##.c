#define VAR(name, num, var) name##num##var //it appends or pastes tokens together
#include <stdio.h>

int main()
{
	int xyz = 125;
	int yzx = 250;
	int zxy = 500;
	printf("%d\n", VAR(y,z,x));
	return 0;
}
