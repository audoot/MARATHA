#include <stdio.h>  

int square(int n)
{
	return n*n;
}

int cube(int n)
{

	return n*n*n;

}

int main()
{
	int choice,n,res;

	printf("\n enter the number");
	scanf("%d",&n);

	printf("enter 1 for square 2 for cube");
	scanf("%d",&choice);

	if(choice == 1)
	{
		res=n*n;
	}

	else if(choice == 2)
	{
		res=n*n*n;
	}
	
	printf("The total is %d",res);

		temp=head;
		printf("\n entered valuesare");	
		while(temp !=NULL)
		{
			printf("\n entered name is %d",temp->rool);
			temp=temp->next;
		} 
}
