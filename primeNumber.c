 //WAP that finds whether the given number is prime or not using for loop.
#include <stdio.h>

int main() {
    int number, i, isPrime = 1;
    printf("Mahesh Shrestha\n");
    // Input from user
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // 0 and 1 are not prime numbers
    if (number <= 1) {
        isPrime = 0;
    } else {
        // Check for factors from 2 to num - 1
        for (i = 2; i <= number / 2; i++) {
            if (number % i == 0) {
                isPrime = 0; // Found a factor, not prime
                break;
            }
        }
    }

    // Output the result
    if (isPrime)
        printf("%d is a prime number.\n", number);
    else
        printf("%d is not a prime number.\n", number);

    return 0;
}

