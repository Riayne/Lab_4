#include <stdio.h>

void main()
{
	int num;
	float mult;
	printf("Enter number: ");
	scanf("%d", &num);
	mult = num%3;
	if (mult == 0)
	{
		printf("This number is a multiple of 3");
    } 
	else 
	{
		printf("this number is not a multiple of 3");
	}
	
}