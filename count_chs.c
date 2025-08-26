#include <stdio.h>
#include <ctype.h>  // for isalpha(), isdigit()

int main() {
    char str[200];
    int vowels = 0, consonants = 0, digits = 0, spaces = 0, commas = 0, semicolons = 0;

    // Formatted input: read until newline (Enter key)
    printf("Enter a line of text: ");
    scanf("%[^\n]", str);   // this will read everything until newline

    // Process each character
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowels++;
        }
        else if (isalpha(ch)) {
            consonants++;
        }
        else if (isdigit(ch)) {
            digits++;
        }
        else if (ch == ' ') {
            spaces++;
        }
        else if (ch == ',') {
            commas++;
        }
        else if (ch == ';') {
            semicolons++;
        }
    }

    // Formatted output
    printf("\nVowels      : %d", vowels);
    printf("\nConsonants  : %d", consonants);
    printf("\nDigits      : %d", digits);
    printf("\nSpaces      : %d", spaces);
    printf("\nCommas      : %d", commas);
    printf("\nSemicolons  : %d\n", semicolons);

    return 0;
}
