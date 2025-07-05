//Sorting
#include<stdio.h>
void main()
{
int number[100], i, j, n, temp;
printf("How many numbers you want to sort?:\t");
scanf("%d", &n);
for(i=0;i<n;i++)
scanf("%d", &number[i]);
for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{
if(number[i]>number[j])
{
temp=number[i];
number[i]=number[j];
number[j]=temp;
}
}
}
printf("The numbers in ascending order are:\n");
for(i=0;i<n;i++)
printf("\t%d", number[i]);
getch();
}
