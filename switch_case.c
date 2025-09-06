// WAP to display name of the day using switch case statement
// #include<stdio.h>
// int main()
// {
// 	int day;
	
// 	printf("Enter any number from 1 to 7\n");
// 	scanf("%d", &day);
	
// 	switch(day)
// 	{
// 		case 1:
// 		printf("Sunday");
// 		break;
		
// 		case 2:
// 		printf("Monday");
// 		break;
		
// 		case 3:
// 		printf("Tuesday");
// 		break;
		
// 		case 4:
// 		printf("Wednesday");
// 		break;
		
// 		case 5:
// 		printf("Thursday");
// 		break;
		
// 		case 6:
// 		printf("Friday");
// 		break;
// 		case 7:
// 		printf("Saturday");
// 		break;
		
// 	    default:
//         printf("Invalid input! Please enter a number between 1 and 7.\n");		
// 	}
// 	return 0;
// }

#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    // Input operator
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);  // Notice the space before %c to consume newline

    // Input operands
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Switch-case for arithmetic operations
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '-':
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '*':
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
            } else {
                printf("Error! Division by zero is not allowed.\n");
            }
            break;

        default:
            printf("Invalid operator! Please use +, -, * or /\n");
    }

    return 0;
}
