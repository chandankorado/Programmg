#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *link;
};

// display list

void displayList(struct node *head)
{
	struct node *temp;
	if(head == NULL)
		printf("List is Empty !\n");
	else
	{
		temp = head;
		printf("Add of Head is : | %u |\n",head);
		while(temp != NULL)
		{
			printf("| %d|%u |->  ",temp->data,temp->link);
			temp = temp->link;
		}
	}
}

int main()
{
	struct node *head = malloc(sizeof(struct node));
	head->data = 23;
	head->link = NULL;
	
	struct node *current = malloc(sizeof(struct node));
	current->data = 34;
	head->link = current;
	
	current = malloc(sizeof(struct node));
	current->data = 45;
	current->link = NULL;
	
	head->link->link = current;
	
	printf("List already created \n");
	
	displayList(head);
	
	return 0;
}