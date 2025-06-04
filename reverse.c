// WAP to reverse a number using whike loop.
#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;
    printf("Mahesh Kumar Shrestha\n");
    // Input from user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // While loop to reverse the number
    while (num != 0) {
        remainder = num % 10;            // Get the last digit
        reversed = reversed * 10 + remainder; // Append it to reversed
        num = num / 10;                  // Remove the last digit
    }

    // Output the reversed number
    printf("Reversed number: %d\n", reversed);

    return 0;
}

