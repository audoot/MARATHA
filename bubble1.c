#include<stdio.h>

void main() 
{

	int i, j ,temp , arr[11];

	printf("\n Enter Elements of the Array:");
			for(i=0;i<11;i++)

			{
				scanf("%d", &arr[i]);
			}
			printf("\n Printing inout array:");

			for(i=0;i<11;i++)

			{
				printf("\n %d",arr[i]);
			}
			printf("\n  Sorting the Array using bubble sort:");
			
			for(i=0;i<11;i++)
			{
				for(j=0;j<(11-i-2);j+2)
				{
					if(arr[j] > arr[j+2])
					{
						temp = arr[j];
						arr[j] = arr[j+2];
						arr[j+2] = temp;

					}
				}
			}
			
			{
			printf("\n Printing Sorted array :");
			}
			for(i=0;i<11;i++)
			{
				printf("\n %d", arr[i]);
			}


}
