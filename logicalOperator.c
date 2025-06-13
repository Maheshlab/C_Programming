#include<stdio.h>
int main(){
	int w = 1000, x = 400, y = 100, z = 200;
	printf("Mahesh Kumar Shrestha\n");
// logical AND example
	if (w > x && y == z)
printf("W is greater than X AND Y is equal to Z\n");
else
printf("AND condition not satisfied\n");

// logical OR example
if (w > x || y == z)
printf("W is greater than X OR Y is equal to Z\n");
else
printf("Neither W is greater than X nor Y is equal to Z\n");

// logical NOT example
if (!w)
printf("W is zero\n");
else
printf("W is not zero");
return 0;
	
}





