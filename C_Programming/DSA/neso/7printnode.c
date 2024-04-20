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
		printf("| %d | %u | -> ",ptr->data,ptr->link);
		ptr = ptr->link;
	}
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
	
	print_data(head);
	
	return 0;
}
