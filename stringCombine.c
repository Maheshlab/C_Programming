#include <stdio.h>    // Changed from string.h to stdio.h for printf/scanf
#include <string.h>   // Added for strcat
#include <conio.h>    // Added for getch (non-standard, used in some compilers)

int main()            // Changed void main() to int main()
{
    char string1[30], string2[30];
    char *value;      // Added declaration for value
    
    printf("Mahesh Kumar Shrestha\n");
    printf("Enter the first string:\n");
    scanf("%s", string1);
    
    printf("Enter the second string:\n");
    scanf("%s", string2);
    
    value = strcat(string1, string2);    // Correct assignment
    printf("The combined string is: %s\n", value);  // Added %s format specifier and \n
    
    getch();          // Note: getch() is non-standard, consider using getchar() instead
    return 0;         // Added return statement for main
}
