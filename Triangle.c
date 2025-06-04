// Program to calculate the area of the triangle
// WAP to calculate the area of the triangle
#include<stdio.h>

int main()
{
	float area, base, height;
	
	printf("Mahesh Kumar Shrestha\n");
	
	//Getting user Input
	printf("Enter base:\n");
	scanf("%f", &base);
	
	printf("Enter height:\n");
	scanf("%f", &height);
	
	//Calculation
	area= 0.5 * base * height;
	
	//Result
	printf("The area of the triangle is %.2f", area);
	
	return 0;
}
