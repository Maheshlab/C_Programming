  //Program to calculate the simple interest
#include<stdio.h>

int main()
{
	float p, t, r, simpleinterest;
	
	printf("Mahesh Kumar Shrestha\n");
	
	// Getting user input
	printf("Enter principal:\n");
	scanf("%f", &p);
	
	printf("Enter time:\n");
	scanf("%f", &t);
	
	printf("Enter rate:\n");
	scanf("%f", &r);
	
	//Calculation
	simpleinterest = (p * t * r)/ 100;
	
	//Result
	printf("The simple interest of the given data is %f\n", simpleinterest);
	
	return 0;
}
