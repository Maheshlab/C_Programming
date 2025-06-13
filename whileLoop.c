#include <stdio.h>
//Mahesh Kumar Shrestha
// int main() {
//     int i = 2;
//     printf("Mahesh Kumar Shrestha\n");
//     printf("Even numbers up to hundred:\n");
//     //Using while loop
//     while (i <= 100) {
//         printf("%d ", i);
//         i += 2;
//     }
//     return 0;
// }


int main() {
    int i = 2;
    printf("Mahesh Kumar Shrestha\n");
    printf("Even numbers up to hundred:\n");
    //Using do-while loop
    do {
        printf("%d ", i);
        i += 2;
    } while (i <= 100);
    return 0;
}
