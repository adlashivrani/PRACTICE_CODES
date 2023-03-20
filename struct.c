#include <stdio.h>
#include <string.h>

typedef struct {
	int age;
	char name[20];
} person;

int main() 
{
	person p ={25, "Jhon"};
	person *ptr = &p;
	ptr->age++;
	strcpy(ptr->name,"smith");
	printf("name %s\n", p.name);
	printf("age: %d", p.age);
	return 0;
}
