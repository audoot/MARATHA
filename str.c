#include<stdio.h>

struct student

{
	int roll_num;
	char name [80];
	char div [10];
	int age;
};

void main()
{

	 int i;

	 char c1;

	 struct student A1,A2;

	 printf("\n Enter roll number for A1:");
	 scanf("%d",&A1.roll_num);
	 printf("\n Enter age number for A1:");
	 scanf("%d",&A1.age);
	 printf("\n Enter Division name for A1:");
	 scanf("%s",A1.div);
	 printf("\n Enter Name for A1:");
	 scanf("%s",A1.name);


	 printf("\n Enter roll number for A2:");
	 scanf("%d",&A2.roll_num);
	 printf("\n Enter age number for A2:");
	 scanf("%d",&A2.age);
	 printf("\n Enter Division name for A2:");
	 scanf("%s",A2.div);
	 printf("\n Enter Name for A2:");
	 scanf("%s",A2.name);

	 printf("\n Entered Roll number A1 is for %d",A1. roll_num);
	 printf("\n Entered Age Number A1 is for %d",A1. age);
	 printf("\n Entered Division Name A1 is for %s",A1.div);
	 printf("\n Entered Name A1 is for %s",A1.name);
	 
	 printf("\n Entered Name A2 is for %s",A2.name);
	 printf("\n Entered Age Number A2 is for %d",A2. age);
	 printf("\n Entered Division Name A2 is for %s",A2.div);
	 printf("\n Entered Name A2 is for %s",A2.name);
}
	 




