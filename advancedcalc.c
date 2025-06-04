// Program to sum, sub, mul, div of two input numbers

#include<stdio.h>
int main()
{
	int sum, sub, mul, firstNumber, secondNumber;
	float div;
	
	printf("Mahesh Kumar Shrestha\n");
	
	//Getting User Input
	printf("Enter first number:\n");
	scanf("%d", &firstNumber);
	
	printf("Enter second number:\n");
	scanf("%d", &secondNumber);
	
	//Calculation
	sum= firstNumber + secondNumber;
	sub= firstNumber - secondNumber;
	mul= firstNumber * secondNumber;
	div= firstNumber / secondNumber;
	
	//Result
	printf("The sum is :%d\n", sum);
	printf("The sub is :%d\n", sub);
	printf("The mul is :%d\n", mul);
	printf("The div is :%.2f\n", div);
	
	return 0;
}
