// Ternary operator
/*
Syntax:
condition ? stat if true : stat if false
*/
#include<stdio.h>
int main()
{
	int age;
	printf("Enter your age:\n");
	scanf("%d", &age);
	
	age>=18 ? printf("You are a voter.") : printf("You are not a voter.");
	
	return 0;
}
