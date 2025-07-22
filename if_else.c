// WAP to display greatest numbers among three numbers using if-else.
#include<stdio.h>
int main() {
    int a, b, c;

    // Input three numbers
    printf("Enter three numbers:\n");
    scanf("%d %d %d", &a, &b, &c);

    // Compare using if-else
    if (a >= b && a >= c) {
        printf("The greatest number is: %d\n", a);
    }
    else if (b >= a && b >= c) {
        printf("The greatest number is: %d\n", b);
    } 
    else {
        printf("The greatest number is: %d\n", c);
    }

    return 0;
}

