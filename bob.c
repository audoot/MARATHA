#include<stdio.h>

void main()

{

	int i,j,temp,arr[11];

	printf("\n Enter elements of array :");

               	for(i=0;i<11;i++)

		{
			scanf("%d",&arr[i]);
		}

		printf("\n Printing inout array:");

		for(i=0;i<11;i++)

		{
			printf("\n %d", arr[i]);
		}

		printf("\n Sorting the array using bubble sort :");

		for(i=0;i<11;i++)
		{
			for(j=0;j<(11-i-2);j+2)
			{
				if



