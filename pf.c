#include<stdio.h>

void display_with_pointer(int *ptr)
{
	*ptr = 200;
	printf("\n the value of a in display_with_pointer() function is %d", *ptr);
}

void display (int a)
{
	a = 100;
	printf("\n The value of a in display() function is %d",a);
}
void main()
{ 
	int a;
	 printf("\n Enter value for a:");
	 scanf("%d",&a);

	 printf("\n value of a before display()function is %d",a);
	 display(a);

	 printf("\n value of a after display()function is %d",a);
	 printf("\n the value before display_with_pointer()function is %d",a);
	 display_with_pointer(&a);
	 printf("\n  the value  after display_with_pointer()function is %d",a);
}


