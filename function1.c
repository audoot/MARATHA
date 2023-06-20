
#include<stdio.h>

void find_largest(int, int, int); // Function Decleration

float find_average(int, int,int); // Function Decleration	
	 

void main()
{
	int a,b,c;
	float avg;

	printf("\n Enter  value for a :");
	scanf("%d", &a);
	printf("\n Enter  value for b :");
	scanf("%d", &b);
	printf("\n Enter value for c :");
	scanf("%d",&c);

	find_largest(a, b, c); // function call

	avg = find_average(a,b,c);
	printf("\n Average is %f", avg);

}

// Function Defination
void find_largest(int t1, int t2, int t3)
{
	if(t1 >=t2 && t1>=t3)
	{
		printf("\n %d is Largest", t1);
	}
	else if (t2 >=t1 && t2>=t3)
	{
		printf("\n %d is the largest",t2);
	}
	else if(t3 >=t1 && t3 >=t2)
	{
		printf("\n %d is the largest",t3);
	}
}

float find_average(int t1, int t2, int t3)
{
	return(t1 + t2 + t3) / 3;
}



