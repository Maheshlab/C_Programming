// program to find the fibonacci sequence
#include<stdio.h>
int main ()
{ 
    int fib1, fib2, prev, next, num;
    fib1 = 1;
    fib2 = 1;
    prev = fib1;
    
    printf("Enter number upto which you want Fibonacci sequence:\n");
    scanf("%d", &num);

    printf("Fibonacci sequence are:%d", fib1);

    do
    {
        next = fib2 + prev;
        prev = fib2;
        fib2 = next;
        printf(",%d", prev);
    }while(num>next);
    printf("\n");
    return 0;
}