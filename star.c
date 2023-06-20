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
	scanf("%d",&A1.age_num);
	printf("\n Enter Division name for A1:");
	scanf("%s",A1.div);
	printf("\n Enter Name for A1:");
	scanf("%s",A1.name);

	printf("\n Enter roll number for A2:");
	scanf("%d",&A2.roll_num);
	printf("\n Enter age number for A2:");
	scanf("%d",&A2.age_num);
	printf("\n Enter Division name for A2:");
	scanf("%s",A2.div);
	printf("\n Enter Name for A2:");
	scanf("%s",A2.name);

	printf("\ Enter Roll number A1 is for %d",A1.roll_num);
	printf("\ Enter Age number A1 is for %d",A1.age);
	printf("\ Enter Division name A1 is for %s",A1.div);
	printf("\ Enter Name A1 is for %s",A1.name);


	printf("\ Enter Roll number A2 is for %d",A2.roll_num);
	printf("\ Enter Age number A2 is for %d",A2.age);
	printf("\ Enter Division name A2 is for %s",A2.div);
	printf("\ Enter Name A2 is for %s",A2.name);
}


