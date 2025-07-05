#include <stdio.h>

// Function declaration (prototype)
int function(int arg1, int arg2, int arg3);

// Main function
int main() {
    int result;
    int arg1 = 10, arg2 = 20, arg3 = 30;
    result = function(arg1, arg2, arg3); // Calling function
    printf("Result from function: %d\n", result);
    return 0;
}

// Function definition
int function(int arg1, int arg2, int arg3) {
    // Local variable declaration
    int sum;
    
    // Statement
    sum = arg1 + arg2 + arg3;
    
    // Return value
    return sum;
}
