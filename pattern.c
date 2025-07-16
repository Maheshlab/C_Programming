
#include <stdio.h>

int main() {
    int i, j;
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= i; j++) {
            // Print 1 if the position is odd, else print 0
            if(j % 2 == 0)
                printf("0");
            else
                printf("1");
        }
        printf("\n");
    }
    return 0;
}
