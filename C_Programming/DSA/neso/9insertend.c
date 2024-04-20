#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *link;
};

void print_data(struct node *head)
{
	struct node *ptr = NULL;
	ptr = head;
	printf("Add of head is : %u \n",head);
	while(ptr != NULL)
	{
		printf("| %d|%u | -> ",ptr->data,ptr->link);
		ptr = ptr->link;
	}
}

void add_at_end(struct node *head,int data)
{
	struct node *ptr = NULL;
	ptr = head;
	struct node *temp = (struct node*)malloc(sizeof(struct node));
	if(temp == NULL)
	{
		printf("Unable to allocate memory !");
		exit(1);
	}
	temp->data = data;
	temp->link = NULL;
	
	while(ptr->link != NULL)
	{
		ptr = ptr->link;
	}
	ptr->link = temp;
}

int main()
{
	struct node *head = (struct node*)malloc(sizeof(struct node));
	head->data = 23;
	head->link = NULL;
	
	struct node *current = (struct node*)malloc(sizeof(struct node));
	current->data = 34;
	
	head->link = current;
	
	current = (struct node*)malloc(sizeof(struct node));
	current->data = 45;
	current->link = NULL;
	
	head->link->link = current;
	
	add_at_end(head,66);
	add_at_end(head,78);
	
	print_data(head);
	
	return 0;
}
