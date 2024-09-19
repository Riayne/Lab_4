#include <stdio.h>

void main()
{
	int num1;
	int num2;
	float ans;
	char operator;
	
	printf("Enter first number: ");
	scanf("%d", &num1);
	
	printf("enter second number: ");
	scanf("%d",&num2);
	
	printf("Enter operator:");
	scanf(" %c", &operator);
	switch(operator)
	{
		case '+':
			ans = num1 + num2;
			printf("answer = %f",ans);
			break;
		case '-':
			ans = num1 - num2;
			printf("answer = %f" , ans);
			break;
		case '*':
			ans = num1 * num2;
			printf("answer = %f" , ans);
			break;
		case '/':
			ans = num1 / num2;
			printf("answer = %f" , ans);
			break;
		
	}
}