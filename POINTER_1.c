#include<stdio.h>

void main()

{
	char c1 [] = {'G','O','O','D','\0'};
	char *ptr;
	
	ptr = c1;

	printf("\n The value of character is %c",*ptr++);
	printf("\n The value of character is %c",*ptr++);
	printf("\n The value of character is %c",*ptr++);
	printf("\n The value of character is %c",*ptr++);
	ptr++;


}
