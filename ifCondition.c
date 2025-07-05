// If conditions
#include<stdio.h>
int main()
{
	int age;
	
	printf("Enter your age:\n");
	scanf("%d", &age);
	
	if(age>18){
	printf("You are a voter.\n");	
	}else{
	printf("You are not a voter.\n");
	}
	
	return 0;
}
