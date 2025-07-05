// Use of getchar() and putchar() in C programming
#include<stdio.h>

int main(){
    char ch;
    
    //Ask the user to enter a character
    printf("Enter any character:\n");
    ch = getchar(); //Read a single character from input
    
    // Display the entered character
    printf("You entered:\n");
    putchar(ch); // Output the same charactert
    
    return 0;
}

