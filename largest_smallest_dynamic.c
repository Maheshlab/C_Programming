#include <stdio.h>
#include <stdlib.h>  // for malloc() and calloc()

int main() {
    int *arr, n, i;
    int largest, smallest;

    // Input size
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    // Allocate memory using malloc (can replace with calloc)
    arr = (int*) malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Accept numbers
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize largest and smallest
    largest = smallest = arr[0];

    // Find largest and smallest
    for (i = 1; i < n; i++) {
        if (arr[i] > largest)
            largest = arr[i];
        if (arr[i] < smallest)
            smallest = arr[i];
    }

    // Output
    printf("\nLargest number: %d", largest);
    printf("\nSmallest number: %d\n", smallest);

    // Free allocated memory
    free(arr);

    return 0;
}
