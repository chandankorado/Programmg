// move to front the last node

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node* link;
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

struct node *moveToFront(struct node* head)
{
	struct node *last, *prev;
	if(head == NULL || head->link == NULL)
		return head;
	last = head ; prev = NULL;
	while(last->link != NULL)
	{
		prev = last;
		last = last->link;
	}
	prev->link = NULL;
	last->link = head;
	head = last;
	
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
	head = moveToFront(head);
	
	printList(head);
	return 0;
}