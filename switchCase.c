// WAP to display name of the day using switch case statement
#include<stdio.h>
int main()
{
	int day;
	printf("Mahesh Kumar Shrestha\n");
	
	printf("Enter any number from 1 to 7\n");
	scanf("%d", &day);
	
	switch(day)
	{
		case 1:
		printf("Sunday");
		break;
		
		case 2:
		printf("Monday");
		break;
		
		case 3:
		printf("Tuesday");
		break;
		
		case 4:
		printf("Wednesday");
		break;
		
		case 5:
		printf("Thursday");
		break;
		
		case 6:
		printf("Friday");
		break;
		case 7:
		printf("Saturday");
		break;
		
	    default:
        printf("Invalid input! Please enter a number between 1 and 7.\n");		
	}
	return 0;
}
