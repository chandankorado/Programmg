#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *link;
};

struct node *head, *temp;

void addnode(int data)
{
	struct node *newnode = (struct node*)malloc(sizeof(struct node));
	newnode->data = data;
	newnode->link = NULL;
	
	if(head == NULL)
	{
		head = newnode;
		temp = newnode;
	}
	else
	{
		temp->link = newnode;
		temp = newnode;			//temp = newnode
	}
}

void printList()
{
	struct node *ptr = head;
	if(head == NULL)
	{
		printf("List is Empty !");  //return;
	}
	else
	{
		printf("Linked list is :\n");
		printf("Add of head is : | %u |\n",ptr);
		while(ptr != NULL)
		{
			printf("| %d|%u |->  ",ptr->data,ptr->link);
			ptr = ptr->link;
		}
	}
}

int main()
{
	addnode(17);
	addnode(3);
	addnode(50);
	addnode(9);
	addnode(45);
	addnode(87);
	addnode(23);
	addnode(10);
	
	printList();
	return 0;
}
