// This program demonstrates the use of pointers in C by taking an integer input
#include <stdio.h>

int main() {
    int num;        // Normal integer variable
    int *ptr;       // Pointer to an integer

    ptr = &num;     // Point ptr to the address of num

    printf("Enter a number:\n ");
    scanf("%d", ptr);   // Taking input using pointer

    printf("You entered: %d\n", *ptr);         // Dereferencing to print value
    printf("Stored at address: %p\n", ptr);      // Pointer holds address of num

    return 0;
}
