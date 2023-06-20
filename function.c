#include<stdio.h>

void find_largest(int, int,int, int); // Function Declaration 

float find_average(int,int,int,int); // Function Declaration


void main()
{
	int a,b,c,d;
	float avg;

	printf("\n Enter Value for a : ");
	scanf("%d", &a);
	printf("\n Enter Value for b : ");
	scanf("%d", &b);
	printf("\n Enter Value for c : ");
	scanf("%d", &c);
	printf("\n Enter Value for d : ");
	scanf("%d", &d);


	find_largest(a,b,c,d); // Function Call

	avg = find_average(a,b,c,d);
	printf("\n Average is %f", avg);

}

// Function Definition
void find_largest(int p1, int p2, int p3, int p4)
{
	if(p1 >= p2 && p1 >= p3 && p1 >= p4)
	{
		printf("\n %d is Largest ", p1);
	}
	else if(p2 >= p1 && p2 >= p3 && p2 >= p4)
	{
		printf("\n %d is Largest ", p2);
	}
	else if(p3 >= p1 && p3 >= p2 && p3 >= p4)
	{
		printf("\n %d is the Largest ",p3);
	}
	else if (p4 >= p1 && p4 >= p2 && p4 >= p3)
	{
		printf("\n %d is the Largest ",p4);
	}


}

float find_average(int t1, int t2, int t3, int r5)
{

	return ( t1+ t2+ t3+ r5) / 4;
}
