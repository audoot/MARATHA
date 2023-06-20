#include<stdio.h>
void main()

{
	char c1 [] = {'w','a','t','c','h','\0'};

	char *ptr;

	ptr = c1;

	printf("\n The Value of Character is %c",*ptr++);
	printf("\n The Value of Character is %c",*ptr++);
	printf("\n The Value of Character is %c",*ptr++);
	printf("\n The Value of Character is %c",*ptr++);
	printf("\n The Value of Character is %c",*ptr++);
	ptr++;
}
