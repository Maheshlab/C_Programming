#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char string[25];
    printf("Enter the string you want to reverse:\n");
    scanf("%s", string);
    strrev(string);
    printf("The reversed string is: %s\n", string);
return 0;
}
