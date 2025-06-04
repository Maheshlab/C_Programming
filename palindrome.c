// WAP to find the given number is palindrome or not.
#include <stdio.h>

int main() {
    int num, reversed = 0, remainder, original;
    printf("Mahesh Kumar Shrestha\n");
    // Input from user
    printf("Enter an integer: ");
    scanf("%d", &num);

    original = num;  // Store original number for comparison

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num = num / 10;
    }

    // Check if original and reversed are equal
    if (original == reversed)
        printf("%d is a palindrome number.\n", original);
    else
        printf("%d is not a palindrome number.\n", original);

    return 0;
}

