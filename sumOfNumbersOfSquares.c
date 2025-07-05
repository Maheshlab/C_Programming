// Compute 1^2 + 2^2 + 3^2 +....+n^2 using for loop (Take n from the user)
#include <stdio.h>

int main() {
    int number, i;
    int sum = 0;
    printf("Mahesh Kumar Shrestha\n");
    // Take input from user
    printf("Enter the value of number:\n");
    scanf("%d", &number);

    // Calculate sum of squares using for loop
    for(i = 1; i <= number; i++) {
        sum += i * i; // i^2
    }
 
    // Print the result
    printf("Sum of squares from 1 to %d is: %d\n", number, sum);

    return 0;
}

