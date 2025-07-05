#include <stdio.h>
int main()
{
int a = 5000;
int b = 6000;
printf("Mahesh Kumar Shrestha\n"); 
printf("a=%d,b=%d\n",a,b);
b=++a;
printf("a=%d, b=%d\n",a,b);
b=a++;
printf("a=%d, b=%d\n",a,b); 
b=a--;
printf("a=%d, b=%d\n",a,b); 
b=--a;
printf("a=%d, b=%d\n",a,b);
return 0;
}
