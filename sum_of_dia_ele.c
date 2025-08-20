// program to calculate the sum of diagonal elements from left to right.
#include<stdio.h>
int main() 
{
int mat[3][3], i,j,sum=0;
printf("Mahesh Kumar Shrestha\n");
printf("Enter the elements of matrix:\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{

scanf("%d",&mat[i][j]);

}
}
printf("Sum of diagonal elements is:\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{

if(i==j)
{

sum=sum+mat[i][j];

}

}
}
printf("%d",sum); 
return 0;
}
