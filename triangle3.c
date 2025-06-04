// Program to find the area of the triangle if the measurement of three sides is given
#include<stdio.h>
#include<math.h>

int main()
{
	float a, b, c, s, area;
	printf("Mahesh Kumar Shrestha\n");
	
	//Getting User Input
	printf("Enter three sides of the traingle:\n");
	scanf("%f %f %f", &a, &b, &c);
	
	//Calculation
	s = (a+b+c)/2;
	area = sqrt(s*(s-a)*(s-b)*(s-c));
	
	//Result 
	printf("The area of the traingle is :%f\n", area);
	return 0;
 } 
