#include<stdio.h>

void find_largest(int,int); // Function decleration

float find_smallest(int,int);//Fuction decleration

void main()

{
	int a,b;
	float avg;

	
	printf("\n Enter value for a :");
	scanf("%d", &a);
	printf("\n Enter value for b :");
	scanf("%d", &b);

	find_largest(a,b); // function call

	avg = find_average(a,b);
	printf("\n average is %f",avg);
}

//Function Defination
 void find_largest(int f1, int d1)

{
	if(f1>=d1)
	{
		printf("\n %d is the largest", f1);
	}
	else if(d1>=f1)
	{
		printf("\n %d is the largest", d1);
	}
}

float find_average(int f1, int d1)
{
	return (f1 + d1)/2;
}


