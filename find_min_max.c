#include <stdio.h>

int main() {
    int numbers[10];
    int i, max, min;

    // Input 10 numbers
    printf("Enter 10 integer values:\n");
    for(i = 0; i < 10; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Initialize max and min to the first element
    max = min = numbers[0];

    // Find max and min
    for(i = 1; i < 10; i++) {
        if(numbers[i] > max)
            max = numbers[i];
        if(numbers[i] < min)
            min = numbers[i];
    }

    // Output results
    printf("Maximum number = %d\n", max);
    printf("Minimum number = %d\n", min);

    return 0;
}
