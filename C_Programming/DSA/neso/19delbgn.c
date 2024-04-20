#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node* link;
};

void printList(struct node* head)
{
	struct node* ptr = head;
	printf("Add of HEAD is | %u | \n",ptr);
	while(ptr != NULL)
	{
		printf("| %d|%u |-->  ",ptr->data,ptr->link);
		ptr = ptr->link;
	}
}

struct node *del_at_bgn(struct node* head)
{
	if(head == NULL)
	{
		printf("This List is already Empty  no need to delete !");
	}
	else
	{
		struct node* temp = head;
		head = head->link;
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

	head = del_at_bgn(head);

	printList(head);
	return 0;
}