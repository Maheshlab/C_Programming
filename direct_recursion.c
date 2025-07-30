// direct recursion in C without a terminating point
#include <stdio.h>
int main()
{
printf("Hello! This is direct recursion.\n");
main();
return 0;
}