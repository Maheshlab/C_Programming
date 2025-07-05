//Matrix Division of the required matrix 
#include <stdio.h>
int main() {
    int i, j, row, column, d, mat[100][100];
    float div[100][100]; 
    printf("Mahesh Kumar Shrestha\n");
    
    // Getting user input
    printf("Enter the number of rows:\n");
    scanf("%d", &row);
   
    printf("Enter the number of columns:\n");
    scanf("%d", &column);
    
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < column; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    
    printf("Enter the number by which you want to divide:\n");
    scanf("%d", &d);
   
    
    // Perform floating-point division
    for (i = 0; i < row; i++) {
        for (j = 0; j < column; j++) {
            div[i][j] = (float)mat[i][j] / d; 
        }
    }
    
    // Print result
    printf("The elements of the matrix after division are:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < column; j++) {
            printf("%.2f\t", div[i][j]); 
        }
        printf("\n");
    }
    
    return 0;
}
