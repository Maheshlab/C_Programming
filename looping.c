#include <stdio.h>

int main() {
    int i, j, rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Outer loop for rows
    for(i = 1; i <= rows; i++) {
        // Inner loop for spaces
        for(j = 1; j <= rows - i; j++) {
            printf("  ");
        }
        // Inner loop for numbers
        for(j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}

