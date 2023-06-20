#include<stdio.h>

{
	int i, arr[10];
	int *p

	// Assign Adress to the pointer
	

		p = arr;
	for(i=0;i<100;i++)

	{
		printf("/n Enter the value for arr [%d]:",i);
		scanf("%d", &arr[i]);
	}

	for(i=0;i<10;i++)

	printf("\n Using pointer :Array[%d] is %d",i,*p);
	printf("\n Regular pointer: Array[%d] is %d",i,*p);
	p++;
	//Increment Pointer location
}



