#include <stdio.h>
#include <string.h>

int main() {
    char str[100], temp;
    int i, j;
    printf("Mahesh Kumar Shrestha\n");
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    i = 0;
    j = strlen(str) - 1;

    // Swap characters from start and end
    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}


