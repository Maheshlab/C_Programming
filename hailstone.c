//WAP to find Hailstone series upto n digits.
#include <stdio.h>

int main() {
    int n, count = 0;
    printf("Mahesh Kumar Shrestha\n");
    // Input from user
    printf("Enter a starting number for the Hailstone series: ");
    scanf("%d", &n);

    // Generate Hailstone (Collatz) series
    printf("Hailstone series: ");
    while (n != 1) {
        printf("%d ", n);
        if (n % 2 == 0)
            n = n / 2;
        else
            n = 3 * n + 1;
        count++;
    }
    printf("1\n"); // End of the series
    count++;

    printf("Total terms in the series: %d\n", count);

    return 0;
}

