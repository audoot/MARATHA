#include<stdio.h>

void main() {

	int i, marks[12];

	for(i=0;i<12;i++)
	{

		printf("\n Enter Marks for subject %d:", i+1);

		scanf("%d",&marks[i]);
	}

	printf("\n Entered Marks Are :");

	for(i=0;i<12;i++)
	{
		printf("\n Marks for Subject %d :%d", i+1, marks[i]);
	}













}
