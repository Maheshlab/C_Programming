//Function with arguments and return value
#include <stdio.h>

//Function Declaration
int add(int a, int b);

//Main function
int main()
{
int a, b, x;
printf("Enter two numbers:\n");
scanf("%d %d", &a, &b);
x=add(a, b);
printf("The sum is:%d\n", x);
}

//Function Definiton
int add(int a, int b)
{
int sum;
sum=a + b;
return sum;
}