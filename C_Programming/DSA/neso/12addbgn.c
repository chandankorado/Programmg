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

struct node* add_at_bgn(struct node *head,int data)
{
	struct node *temp = (struct node*)malloc(sizeof(struct node));
	temp->data = data;
	temp->link = NULL;
	
	temp->link = head;
	head = temp;
	return head;
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
	
	head = add_at_bgn(head,12);
	head = add_at_bgn(head,7);
	
	print_data(head);
	
	return 0;
}

/*

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

struct node* add_at_bgn(struct node **head,int data)
{
	struct node *temp = (struct node*)malloc(sizeof(struct node));
	temp->data = data;
	temp->link = NULL;
	
	temp->link = *head;
	*head = temp;
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
	
	add_at_bgn(&head,12);
	add_at_bgn(&head,7);
	
	print_data(head);
	
	return 0;
}
*/