
#include <stdio.h>

int main()
{
   char ch1, ch2;
   
   printf("Enter first character:\n");
   ch1=getch();
   
   printf("Enter 2nd character:\n");
   ch2=getch();
   
   printf("1st character:\n");
   putch(ch1);
   
   printf("2nd character:\n");
   putch(ch2);
   
   return 0;
}

