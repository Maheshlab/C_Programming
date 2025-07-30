#include <stdio.h>

int main() {
    int i = 2, j = 1;

    for ( ; i <= 10; ) {
        printf("%2d x %2d = %3d\n", i, j, i * j);
        j++;

        if (j > 10) {
            j = 1;
            i++;
            printf("\n"); // separate each table with a blank line
        }
    }

    return 0;
}
