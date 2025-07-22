#include <stdio.h>

int main() {
int number;
char operator;
printf("choose an operator ['+', '-', '*', '/'];"); 
scanf("%c", &operator);

double num1, num2;
printf("enter first number: ");
scanf("%lf" , &num1);

printf("enter second number: ");
scanf("%lf" , &num2);
double result;

switch(operator) {
	case '+':
	result = num1 + num2; 
	break;
	
	case '-':
	result = num1 - num2;
	break;

	case '*':
	result = num1 * num2;
	break;

	case '/':
	result = num1 / num2;
	break;
  
        
	default:
	printf("invalid input");
	
	}
  printf("sum of num1, num2 is %lf", result);


  return 0;




















}
