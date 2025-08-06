//Program to combine the two strings
#include <stdio.h>    
#include <string.h>   
int main()            
{
    char string1[30], string2[30];
    char *value;      // Added declaration for value
    
    printf("Mahesh Kumar Shrestha\n");
    printf("Enter the first string:\n");
    scanf("%s", string1);
    
    printf("Enter the second string:\n");
    scanf("%s", string2);
    
    value = strcat(string1, string2);    
    printf("The combined string is: %s\n", value); 
          
    return 0;        
}
