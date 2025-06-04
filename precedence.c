// Precedence in C programming
#include <stdio.h>

int main() {
    int a = 15, b = 5, c = 2;
    int result1, result2;
    
    printf("Mahesh Kumar Shrestha\n");

    result1 = a + b * c;  // Multiplication has higher precedence than addition
    result2 = (a + b) * c; //Parentheses change the order

    printf("Result1: %d\n", result1);
    printf("Result2: %d\n", result2);

    return 0;
}

