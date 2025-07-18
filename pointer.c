#include<stdio.h>
int main () {
    int x=20, *p=&x;
    printf("The address of x is : %u\n", &x);
    printf("The address of x (value of p or address pointed by p) is : %u\n", p);
    printf("The value of x is : %d\n", x);
    printf("The value of x (value pointed by p) is : %u\n", *p);
    printf("The address of p is :%u\n", &p);
    return 0;

}