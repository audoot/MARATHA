#include<stdio.h>

void main() {

	int i ,j ,temp, arr[12];

	printf("\n Enter Elements of the Array:");

       for(i=0;i<12;i++)
       {
	 
	 scanf("%d", &arr[i]);
       }

          printf("\n Printing Input Array:");

	 for(i=0;i<12;i++)
	 {
		printf("\n%d", arr[i]);
	 }
 	 
	 printf("\n Sorting the Array using bubble sort :");

	 for(i=0;i<12;i++)
	 {

		 for(j=0;j<(12-i-1);j++)
		 {
			 if(arr[j]>arr[j+1])
			 {
				 temp = arr[j];
				 arr[j] = arr[j+1];
				 arr[j+1] = temp;
			 }
		 }
	 }

	 printf("\n Printing Sorted Array :");

	 for(i=0;i<12;i++)
	 {
		 printf("\n %d", arr[i]);
	 }


}

	



















