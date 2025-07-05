#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    char string1[30],string2[40];
    int i=0,value;
    printf("Mahesh Kumar Shrestha\n");
	printf("Enter first string:\n");
	scanf("%s", string1);
	
	printf("Enter second string:\n");
	scanf("%s", string2);
	
	value=strcmp(string1,string2);
	
	if(strcmp(string1,string2)==0){
	printf("Strings are equal.\n");
	}else{
	printf("Strings are unequal.\n");
	}
	getch();
}
