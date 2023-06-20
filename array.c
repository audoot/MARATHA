#include<stdio.h>

void main()
{
	int i,arr[10], key, flag = 0;

	printf("\n Enter Elements of the Array : \n");

	for(i=0;i<10;i++)
	{
		scanf("%d", &arr[i]);
	}

	printf("\n Entered Array is \n");
	for(i=0;i<10;i++)
	{
		printf("\n arr[%d] = %d ", i, arr[i]);
	}

	printf("\n Enter the Key to be searched in the array :");
	scanf("%d", &key);

	for(i=0;i<10;i++)
	{
		if(arr[i] == key)
		{
			printf("\n %d is present in array ", key);
			flag = 1;
			break;
		}
	}

	if(flag == 0)
	{
		printf("\n %d is not present in the array ", key);
	}
}
