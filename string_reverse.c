#include<stdio.h>
#include<string.h>
int main()
{
    char character[25];
    printf("Mahesh Kumar Shrestha\n");
    printf("Enter the character you want to reverse:\n");
    scanf("%s", character);
    strrev(character);
    printf("The reversed character is: %s\n", character);
return 0;
}
