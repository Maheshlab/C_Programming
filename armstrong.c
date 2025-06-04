//WAP to find whether the given number is armstrong number or not.
#include <stdio.h>
#include <math.h>  // For pow()

int main() {
    int number, originalNumber, remainder, result = 0, n = 0;
    printf("Mahesh Kumar Shrestha\n");
    // Input from user
    printf("Enter an integer: ");
    scanf("%d", &number);

    originalNumber = number;

    // Count number of digits (n)
    while (originalNumber != 0) {
        originalNumber /= 10;
        n++;
    }

    originalNumber = number;

    // Compute sum of digits raised to the power n
    while (originalNumber != 0) {
        remainder = originalNumber % 10;
        result += pow(remainder, n);
        originalNumber /= 10;
    }

    // Check if it is an Armstrong number
    if (result == number)
        printf("%d is an Armstrong number.\n", number);
    else
        printf("%d is not an Armstrong number.\n", number);

    return 0;
}

