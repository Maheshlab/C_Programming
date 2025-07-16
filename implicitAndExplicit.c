#include <stdio.h>

int main() {
    // Using implicit type conversion
    printf("Lowercase letters using implicit type conversion:\n");
    for (int i = 'a'; i <= 'z'; i++) {  // 'a' and 'z' are implicitly converted to int
        char ch = i;                   // int to char is implicit
        printf("%c ", ch);
    }

    // Newline separator
    printf("\n\nLowercase letters using explicit type conversion:\n");
    
    // Using explicit type conversion
    for (int i = 97; i <= 122; i++) {           // ASCII values of 'a' to 'z'
        char ch = (char)i;                      // Explicit cast from int to char
        printf("%c ", ch);
    }

    printf("\n");
    return 0;
}
