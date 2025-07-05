#include<stdio.h>
#include<conio.h>
int main()
{
    int a[3][3], b[3][3], c[3][3], i, j, k;
    printf("Mahesh Kumar Shrestha\n");
    
    // Input first matrix
    printf("Enter the elements of first matrix\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    
    // Input second matrix
    printf("Enter the elements of second matrix\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    
    // Matrix multiplication
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            c[i][j] = 0; // Initialize to 0
            for(k = 0; k < 3; k++)
            {
                c[i][j] += a[i][k] * b[k][j]; // Dot product
            }
        }  
    }
    
    // Display result
    printf("The product of two matrices is as follows:\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
    
    getch();
    return 0;
}
