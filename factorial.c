//WAP to calculate the factorial of a number using using for loop.
#include <stdio.h>

int main() {
    int number, i;
    unsigned long long factorial = 1;  // Use long long to handle large results

    // Input from user
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // Check for negative input
    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // For loop to calculate factorial
        for (i = 1; i <= number; i++) {
            factorial = factorial * i;
        }

        // Output the result
        printf("Factorial of %d is %llu\n", number, factorial);
    }

    return 0;
}

