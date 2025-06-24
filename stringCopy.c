#include <stdio.h>
#include <string.h>

int main()
{
    char copy[50], paste[50];
    printf("Mahesh Kumar Shrestha\n");
    printf("\nEnter your name (to copy):\t");
    fgets(copy, sizeof(copy), stdin);  
    
    // Remove trailing newline from fgets if present
    copy[strcspn(copy, "\n")] = '\0';
    
    strcpy(paste, copy);
    printf("\nThe name is (pasted as):\t");
    puts(paste);
    
    getchar(); 
    return 0;  
}
