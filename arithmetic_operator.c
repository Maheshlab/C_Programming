#include<stdio.h>
int main(){
	int x= 40, y=25;
	int add, mul, div, sub, mod;
	
	//Calculation
	add= x + y;
	sub= x - y;
	mul= x * y;
	div= x / y;
	mod= x % y;
	
	//Result
	printf("Additon of two number is:%d\n", add);
	printf("Subtraction of two number is:%d\n", sub);
	printf("Multiplication of two number is:%d\n", mul);
	printf("Division of two number is:%d\n", div);
	printf("Modulous of two number is:%d\n", mod);
	
	return 0;
}
