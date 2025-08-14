// Program that takes 10 integer value and finds the maximum and minimum value
#include <stdio.h>

int main() {
    int num[10];
    int i, max, min;

    // Input 10 numbers
    printf("Enter 10 integer values:\n");
    for(i = 0; i < 10; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num[i]);
    }

    // Initialize max and min to the first element
    max = min = num[0];

    // Find max and min
    for(i = 1; i < 10; i++) {
        if(num[i] > max)
            max = num[i];
        if(num[i] < min)
            min = num[i];
    }

    // Output results
    printf("Maximum number = %d\n", max);
    printf("Minimum number = %d\n", min);

    return 0;
}
