// Function with arguments but no return value
#include <stdio.h>

//Function Declaration
int add(int a, int b);  

//Main Function
int main() 
{
    int a, b;
    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);
    add(a, b); 
    return 0; 
}

//Function Definition
int add(int a, int b) 
{
    int sum;
    sum = a + b;
    printf("\nThe sum is: %d\n", sum);
}