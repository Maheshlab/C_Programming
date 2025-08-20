// Structure basics
#include<stdio.h>

struct student
{
    char name[20];
    int age;

};

int main()
{
struct student stu;

printf("Enter your name:\n");
scanf("%s",stu.name);

printf("Enter your age:\n");
scanf("%d",&stu.age);

printf("Name:%s\n",stu.name);
printf("Age: %d\n",stu.age);

return 0;
}