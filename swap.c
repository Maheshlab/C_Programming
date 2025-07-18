//Program to swap two numbers without using third variable
#include <stdio.h>
int main() {
    int a, b;

    // Input two numbers
    printf("Enter two numbers: \n");
    scanf("%d %d", &a, &b);

    // Display original values
    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swap using arithmetic operations
    a = a + b; // Step 1: Add both numbers
    b = a - b; // Step 2: Subtract new b from sum to get original a
    a = a - b; // Step 3: Subtract new b from sum to get original b

    // Display swapped values
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}