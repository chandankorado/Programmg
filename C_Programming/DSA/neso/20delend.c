#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *link;
};

void printList(struct node *head)
{
	struct node *ptr = head;
	printf("Add of HEAD is | %u | \n",ptr);
	while(ptr != NULL)
	{
		printf("| %d|%u |-->  ",ptr->data,ptr->link);
		ptr = ptr->link;
	}
}

void del_last(struct node *head)
{
	if(head == NULL)
	{
		printf("This is already a Empty List !");
	}
	else if(head->link = NULL)
	{
		free(head);
		head = NULL;	
	}
	else
	{
		struct node *temp = head;
	
		while(temp->link->link != NULL)
		{
			temp = temp->link;
		}
		free(temp->link);
		temp->link = NULL;
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

	del_last(head);

	printList(head);
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

struct node *del_at_end(struct node *head)
{
	if(head == NULL)
	{
		printf("This is already a Empty List !");
	}
	else if(head->link = NULL)
	{
		free(head);
		head = NULL;	
	}
	else
	{
		struct node *temp = head;
		struct node *temp2 = head;
	
		while(temp->link != NULL)
		{
			temp2 = temp;
			temp = temp->link;
		}
		temp2->link = NULL;
		free(temp);
		temp = NULL;
	}
	return head;
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

	head = del_at_end(head);

	printList(head);
	return 0;
}
*/