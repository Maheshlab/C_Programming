// Program to find if the entered number is odd or even

#include<stdio.h>

int  main()
{
	int number;
	printf("Enter number:\n");
	scanf("%d", &number);
	 
	if(number % 2 == 0){
	printf("It is a even number.\n");
	}else{
	printf("It is a odd number.\n");	
	}
	
	return 0;
}


