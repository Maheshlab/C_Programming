// Program to calculate the area and perimeter of the circle
#include<stdio.h>
#define pi 3.1415

int main()
{
	float radius , area, circumference;
	
	printf("Mahesh Kumar Shrestha\n");
	
	//Getting user Input 
	printf("Enter radius:\n");
	scanf("%f", &radius);
	

	//Calculation
	area = pi * radius * radius;
	circumference = 2 * pi * radius;
	
	//Result
	printf("The area of circle is %.2f\n", area);
	printf("The circumference of the circle is %.2f\n", circumference);
	
	
	return 0;
}
