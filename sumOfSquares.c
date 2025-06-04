//Compute 1^2 + 2^2 + 3^2 +......+ n^2 using for loop (Take n from the user)
#include <stdio.h>

int main() {
    int n, i;
    int sum = 0;
    printf("Mahesh Kumar Shrestha\n");
    // Take input from user
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Compute sum of squares using for loop
    for (i = 1; i <= n; i++) {
        sum += i * i; // i*i is i squared
    }

    // Output the result
    printf("Sum of squares from 1^2 to %d^2 is: %d\n", n, sum);

    return 0;
}

