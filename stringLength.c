#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	int length=0;
	char string2[20];
	printf("Mahesh Kumar Shrestha\n");
	printf("Enter the string\n");
	scanf("%s", string2);
	length=strlen(string2);
	printf("The length of string is %d\n",length);
	return 0;
}
