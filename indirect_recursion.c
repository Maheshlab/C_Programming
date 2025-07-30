#include <stdio.h>

int printline(int count);  // Updated signature

int main()
{
    static int count = 0;

    if (count >= 5)  // Base case to stop recursion
        return 0;

    printf("Hey! This is indirect recursion.\n");
    count++;

    printline(count);

    return 0;
}

int printline(int count)
{
    printf("Indirect Recursion\n");
    return main();  // Call main again
}
