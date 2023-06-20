#include<stdio.h>

void main()

{
	int i, n, flag =0;

	printf("\n Enter The Number to be checked if Prime or not Prime:");
	scanf("%d", &n);

	for(i=2;i<=n/2;i++)
	
	{

		if(n% i ==0)
		
		{
			flag = 1;
			break;
		}
	}
	if(flag = 1)
	{
		printf("\n %d is a Prime Number", n);
	}
	else
	{
		printf("\n %d is not a Prime Number",n);
	}
}	
