#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

struct node *addToEmpty(struct node *tail,int data)
{
	struct node *temp = malloc(sizeof(struct node));
	temp->data = data;
	temp->next = temp;
	return temp;
}

struct node *addAtBegn(struct node *tail, int data)
{
	struct node *temp = malloc(sizeof(struct node));
	temp->data = data;	
	temp->next = tail->next;
	tail->next = temp;
	return tail;
}

struct node *addAtEnd(struct node *tail, int data)
{
	struct node *temp = malloc(sizeof(struct node));
	temp->data = data;
	temp->next = tail->next;
	tail->next = temp;
	tail = tail->next;
	return tail;
}

struct node *addAtPos(struct node *tail,int data,int pos)
{
	struct node *temp, *ptr;
	temp = malloc(sizeof(struct node));
	temp->data = data;
	
	ptr = tail->next;
	--pos;
	while(pos != 1)
	{
		ptr = ptr->next;
		pos--;
	}
	temp->next = ptr->next;
	ptr->next = temp;
	return tail;
}

int main()
{
	struct node *tail;
	tail = addToEmpty(tail,20);
	tail = addAtBegn(tail,10);
	tail = addAtEnd(tail,40);
	tail = addAtPos(tail,30,3);

	struct node *p = tail->next;
	printf("Add of first node : | %u |\n\n",tail->next);
	
	do
	{
		printf("| %d|%u |->  ",p->data,p->next);
		p = p->next;
	}while(p != tail->next);
}