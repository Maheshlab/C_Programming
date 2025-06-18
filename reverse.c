// WAP to reverse a number using whike loop.
#include <stdio.h>

int main() {
    int number, reversed = 0, remainder;
    printf("Mahesh Kumar Shrestha\n");
    // Input from user
    printf("Enter an integer: ");
    scanf("%d", &number);

    // While loop to reverse the number
    while (number != 0) {
        remainder = number % 10;            // Get the last digit
        reversed = reversed * 10 + remainder; // Append it to reversed
        number = number / 10;                  // Remove the last digit
    }

    // Output the reversed number
    printf("Reversed number: %d\n", reversed);

    return 0;
}

