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

struct node *revers(struct node* head)
{
	struct node *next = NULL;
	struct node *prev = NULL;
	while(head != NULL)
	{
		next = head->link;
		head->link = prev;
		prev = head;
		head = next;
	}
	head = prev;
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
	head = revers(head);
	
	printList(head);
	return 0;
}