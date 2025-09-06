// Function call by address
#include <stdio.h>
void swap(int *, int *);
int main()
{
int a=50, b=100;
printf("Before swap function call: a=%d and b=%d\n", a, b);
swap(&a, &b);
printf("After swap function call: a=%d and b=%d\n", a, b);
return 0;
}
void swap(int *x, int *y)
{
int temp;
temp=*x;
*x=*y;
*y=temp;
printf("Values within swap: x=%d and y=%d\n", *x, *y);
}