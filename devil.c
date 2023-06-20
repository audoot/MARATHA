#include<stdio.h>
#include<stdlib.h>

struct Emp{
	char name [50];
	struct Emp *next;
};

void main()


{
	struct Emp, *head, *temp,*new;
	int i, a;

	// Creat head Node
	

	head = ( struct Emp*)malloc(sizeof(struct Emp));
	printf("\n Enter name of head node ");
	scanf("%s",head->name);
	
	 head->next = Null;

	 printf("\n please Enter the number of node in Linked list:");
	 scanf("%d",&a);

	 for(i=0;i<a;i++)
{
		 temp=head;
	 while(temp->next !=NULL)

	 {
		 temp = temp->next;
	 }
	 

	 new = (struct Emp*)malloc(sizeof(struct Emp));
	 new->next = NULL;

	 printf("\n enter the name :");
	 scanf("%s",new->name);

	 
	 temp->next=new;
}

         temp = head
          printf("\n Entered values are");
          while(temp != NULL)
	
{
	printf("\n Entered Name is %s",temp->name);
	temp = temp->next;
}
}






