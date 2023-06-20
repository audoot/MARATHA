#include<stdio.h>

void main()
{
	int var1;

	printf("\n Enter Number : ");
	scanf("%d", &var1);

	if( var1 % 2 == 0)
	{
		printf("\n %d is Even number ", var1);
	}
	else
	{
		printf("\n %d is Odd number ", var1);
	}
}
