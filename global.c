#include<stdio.h>

int a = 100;

void function_a(int a)
{
	a =100;
	printf("\n Value is %d", a);
}

void function_b(int b)
{
	int a =9999;
	printf("\n value of a is %d", a);

	a = a + 10;
}
 
void function_c(int c)
{
	printf("\n value of a is %d", a);
}

void main ()
{ 
	int a;
	printf("\n Enter value for a :");
	scanf("%d", &a);

	printf("\n Before calling function_A:a =%d",a);
	function_a(a);


	printf("\n After calling function_A:a =%d",a);
	function_a(a);
	printf("\n After calling function_B:a =%d",a);
	function_b(a);
	printf("\n After calling function_c : =%d",a);
	function_c(a);
}
	
