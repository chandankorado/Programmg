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
	
	printf("Add of HEAD node is : | %u |\n\n",ptr);
	while(ptr != NULL)
	{
		printf("| %d|%u |--> ",ptr->data,ptr->link);
		ptr = ptr->link;
	}
}

void add_at_pos(struct node* head, int data, int pos)
{
	struct node* ptr = head;
	struct node* temp = (struct node*)malloc(sizeof(struct node));
	
	temp->data = data;
	temp->link = NULL;
	
	--pos;						// int i = 1
	while(pos != 1)				// while(i==(pos-1))
	{							// ''
		ptr = ptr->link;
		pos--;					// i++
	}
	temp->link = ptr->link;
	ptr->link = temp;
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

	add_at_pos(head,29,3);
	add_at_pos(head,50,4);

	printList(head);
	return 0;
}