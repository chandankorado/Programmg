#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *link;
};

void printList(struct node *head)
{
	struct node* ptr = head;
	printf("Add of HEAD is | %u | \n",ptr);
	while(ptr != NULL)
	{
		printf("| %d|%u |-->  ",ptr->data,ptr->link);
		ptr = ptr->link;
	}
}

void delpos(struct node **head,int pos)
{
	struct node *current = *head;
	struct node *previous = *head; 	
	if(*head == NULL)
	{
		printf("This is  a Empty List !");
	}
	else if(pos == 1)
	{
		*head = current->link;
		free(current);
		current = NULL;
	}
	else
	{
		while(pos != 1)
		{
			previous = current;
			current = current->link;
			pos--;
		}
		previous->link = current->link;
		free(current);
		current = NULL;
   }
}
int main()
{
	struct node* head = (struct node*)malloc(sizeof(struct node));
	head->data = 12;
	
	struct node* ptr = (struct node*)malloc(sizeof(struct node));
	ptr->data = 23;
	head->link = ptr;
	
	ptr = (struct node*)malloc(sizeof(struct node));
	ptr->data = 34;
	ptr->link = NULL;
	
	head->link->link = ptr;

	delpos(&head,2);

	printList(head);
	return 0;
}
