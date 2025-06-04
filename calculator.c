#include <stdio.h>

//First Calculator using C
int main()
{
	//Declaring Variables
	int firstNumber = 100;
	int secondNumber = 50;
	int add, sub, mul, div, mod;
	
	//Calculating
	add= firstNumber + secondNumber;
	sub= firstNumber - secondNumber;
	mul= firstNumber * secondNumber;
	div= firstNumber / secondNumber;
	mod= firstNumber % secondNumber;
	
	//Printing
	printf("The sum is %d\n", add);
	printf("The sub is %d\n", sub);
	printf("The mul is %d\n", mul);
	printf("The div is %d\n", div);
	printf("The mod is %d\n", mod);
	return 0;
}
