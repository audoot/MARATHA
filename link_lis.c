#include<stdio.h>
#include<stdlib.h>

struct Emp{
	char name[50];
	struct Emp *next;
};

void main()
{
	struct Emp *head, *temp, *new;
	int i,a;

	// Creat Head Node
	
	head = (struct Emp*)malloc(sizeof(struct Emp));
	printf("\n Enter the name of Head node");
	scanf("%s", head->name);

	head->next = NULL;

	printf("/n Please Enter number of Node in  Linked list :");
	scanf("%d", &a);

	 for(i=0;i<a;i++)
	 {
		 temp=head;
		 while(temp->next != NULL)

		 {
			 temp = temp->next;
		 }

		 new = (struct Emp*)malloc(sizeof(struct Emp));
		 new->next = NULL;

		 printf("\n Enter the name:");
		 scanf("%s",new->name);

		 temp->next = new;
	 }

	 temp = head;
	 printf("\n Entered values are");
	 while(temp != NULL)
	 {
		 printf("\n Entered Name is %s", temp->name);
		 temp = temp->next;
	 }
}



