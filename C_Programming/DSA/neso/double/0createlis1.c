#include<stdio.h>
#include<stdlib.h>

struct node
{
	struct node *prev;
	int data;
	struct node *next;
};

struct node *addToEmpty(struct node *head , int data)
{
	struct node *temp = (struct node*)malloc(sizeof(struct node));
	temp->prev = NULL;
	temp->data = data;
	temp->next = NULL;

	head = temp;
	return head;
}

struct node *addAtBegn(struct node *head , int data)
{
	struct node *temp = (struct node*)malloc(sizeof(struct node));
	temp->prev = NULL;
	temp->data = data;
	temp->next = NULL;
	
	temp->next = head;
	head->prev = temp;
	
	head = temp;
	return head; 
}


struct node *addAtEnd(struct node *head , int data)
{
	struct node *ptr, *temp;
	temp = malloc(sizeof(struct node));
	temp->prev = NULL;
	temp->data = data;
	temp->next = NULL;
	
	ptr = head;
	while(ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = temp;
	temp->prev = ptr;
	
	return head;
}

struct node *addAfterPos(struct node *head , int data , int pos)
{
	struct node *newP, *temp, *temp2;
	newP = (struct node*)malloc(sizeof(struct node));
	newP->prev = NULL;
	newP->data = data;
	newP->next = NULL;
	
	--pos;
	temp = head;
	while(pos != 1)
	{
		temp = temp->next;
		pos--;
	}
	if(temp->next ==NULL)
	{
 		temp->next = newP;
	}
	else
	{
		temp2 = temp->next;
	
		temp->next = newP;
		temp2->prev = newP;
		newP->next = temp2;
		newP->prev = temp;
	}
	return head;
}

struct node *addBeforePos(struct node *head , int data , int pos)
{
	struct node *newP, *temp, *temp2;
	newP = (struct node*)malloc(sizeof(struct node));
	newP->prev = NULL;
	newP->data = data;
	newP->next = NULL;
	
	temp = head;
	while(pos > 2)
	{
		temp = temp->next;
		pos--;
	}
	if(pos == 1)
	{
 		temp->next = head;
		head->prev = temp;
	
		head = temp;
	}
	else
	{
		temp2 = temp->next;
	
		temp->next = newP;
		temp2->prev = newP;
		newP->next = temp2;
		newP->prev = temp;
	}
	return head;
}

void printList(struct node *head)
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
			printf("<-| %u| %d |%u |-> ",temp->prev,temp->data,temp->next);
			temp = temp->next;
		}
	}
}


int main()
{
	struct node * head = (struct node*)malloc(sizeof(struct node));
	struct node *ptr;
	
	head = addToEmpty(head,20);
	head = addAtBegn(head,10);
//	head = addAtEnd(head,30);
//	head = addAtEnd(head,40);
	head = addAtEnd(head,70);
	head = addAfterPos(head,65,3);
	head = addBeforePos(head,55,3);
	
	printList(head);
/*	
	ptr = head;
	printf("Add of Head is : | %u |\n",head);
		while(ptr != NULL)
		{
			printf("| %d|%u |->  ",ptr->data,ptr->next);
			ptr = ptr->next;
		}
*/
	return 0;
}