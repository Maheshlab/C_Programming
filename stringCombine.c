#include <stdio.h> //COMBINING STRINGS
#include <conio.h>
void main()
{
int i, j;
char first_name[7]="Ramesh" ;
char last_name[9]="Adhikari";
char name[16];
for(i=0;first_name[i]!='\0';i++)
name[i]=first_name[i];
name[i]=' '; //name[6] i.e i=6
for(j=0;last_name[j]!='\0';j++)
name[i+j+1]=last_name[j];
name[i+j+1]='\0';
printf("%s", name);
getch(); }
