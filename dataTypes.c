// Different types of data types used in C programming
// Mahesh Shrestha

#include<stdio.h>
void main()
{
	int A;
	signed int B;
	unsigned int C;
	float D;
	char Name[30];
	double F;
	long double G;
	
	//Getting data from user
	printf("Enter the integer:\n");
	scanf("%d", &A);

	printf("Enter the signed integer:\n");
	scanf("%d", &B);
	
	printf("Enter the unsigned integer:\n");
	scanf("%u", &C);
	
	printf("Enter the float :\n");
	scanf("%f", &D);
	
	printf("Enter the character:\n");
	scanf("%s", Name); // In a character we do not need & 
	
	printf("Enter the double:\n");
	scanf("%lf", &F);
	
	printf("Enter the long double:\n");
	scanf("%Lf", &G);
	
	//Result 
	printf("The required integer is:%d\n", A);
	printf("The required signed integer is:%d\n", B);
	printf("The required unsigned integer is:%u\n", C);
	printf("The required float is:%f\n", D);
	printf("The required character is:%s\n", Name);
	printf("The required double is:%lf\n", F);
	printf("The required long double is:%Lf\n", G);
	getch();
}
