#include<stdio.h>

{
	int i, arr[10];
	int *p;

	// Assign Adress to the Pointer
	
	p = arr;

	for(i=0;i<10;i++)

	{
		printf("\n Enter the value for arr [%d]:",i);
		sacnf("%d", &arr[i]);
	}

	for(i=0;i<10;i++)

printf("\n Using pointer :Array[%d] is %d",i,*p);

printf("\n Regular pointer : Array[%d] is %d",i,*p);


p++; //Increment Pointer Location
}
