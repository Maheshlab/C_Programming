//Write a program to subtract elements of two 3X3 matrix
#include<stdio.h>
#include<conio.h>
 int main ()
{
int a[3][3],b[3][3],c[3][3],i,j;
printf("Mahesh Kumar Shrestha\n");
printf("Enter the elements of first matrix:\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{

scanf("%d",&a[i][j]);

}
}
printf("Enter the elements of second matrix:\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{

scanf("%d",&b[i][j]);

}
}

printf("The subtraction of two matrix is given below:\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
c[i][j]=a[i][j]-b[i][j];
printf("%d\t",c[i][j]);
}
printf("\n");

}
getch();
}
