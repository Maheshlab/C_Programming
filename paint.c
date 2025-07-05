//Adding two integers
#include<stdio.h>
int main()
{
	//Declaring varaibles
	int x, y, add;
	
	//Getting User input
	printf("Enter first number:\n");
	scanf("%d", &x );
	
	printf("Enter second number:\n");
	scanf("%d", &y);
	
	//Calculating
	add= x + y;
 
    //Printing
	printf("The sum is %d",add);
	return 0;
}

