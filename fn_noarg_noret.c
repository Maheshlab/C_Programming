//Function with no argument and no return value
#include <stdio.h>
//Function Declaration
int add() ;

//Main Function
int main()
{
add(); //Function Call
return 0;
}

//Function Definition
int add()
{
int a, b, sum;
printf(" Enter two numbers:\n");
scanf("%d %d",&a,&b);
sum = a + b;
printf("The sum is:%d\n", sum);
}