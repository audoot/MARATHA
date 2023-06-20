#include<stdio.h>
 void main()

{
	char c1 [] = {'p','a','r','a','d','o','x'};
	char *ptr;
	 
	ptr = c1;

		printf("\n  The value of character is %c",*ptr++);
		printf("\n  The value of character is %c",*ptr++);
		printf("\n  The value of character is %c",*ptr++);
		printf("\n  The value of character is %c",*ptr++);
		printf("\n  The value of character is %c",*ptr++);
		printf("\n  The value of character is %c",*ptr++);
		printf("\n  The value of character is %c",*ptr++);
		ptr++;
}
