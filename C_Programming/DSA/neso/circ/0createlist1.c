#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

struct node *delAtBegn(struct node *tail)
{
	struct node *temp;
	temp = tail->next;
	tail->next = tail->next->next;
	free(temp);
	temp = NULL;
	return tail;
}

struct node *delAtEnd(struct node *tail)
{
	struct node *temp = tail->next;
	while(temp->next != tail)
		temp = temp->next;
	temp->next = tail->next;
	free(tail);
	tail = temp;
	return tail;
}

struct node *delAtPos(struct node *tail, int pos)
{
	struct node *temp,*ptr;
	temp = tail->next;
	--pos;
	while(pos != 1)
	{
		temp = temp->next;
		pos--;
	}
	ptr = temp->next;
	temp->next = ptr->next;
	free(ptr);
	ptr = NULL;
	return tail;
}


void printList(struct node *tail)
{
	struct node *p = tail->next;
	printf("\n\nAdd of first node : | %u |\n\n",tail->next);
	
	do
	{
		printf("| %d|%u |->  ",p->data,p->next);
		p = p->next;
	}while(p != tail->next);
}

int main()
{
	struct node *tail, *temp;
	
	int i, n, data;
	printf("Enter the no of nodes : ");
	scanf("%d",&n);
	
	printf("\nEnter data for first nodes : ");
	scanf("%d",&data);
	
	tail = (struct node*)malloc(sizeof(struct node));
	tail->data = data;
	tail->next = tail;
	
	for(i = 1; i < n; i++)
	{
		temp = (struct node*)malloc(sizeof(struct node));
		printf("\nEnetr data for %d node :",i+1);
		scanf("%d",&data);
		temp->data = data;
		
		temp->next = tail->next;
		tail->next = temp;
		tail = tail->next;
	}
	struct node *p = tail->next;
	printf("\nAdd of first node : | %u |\n\n",tail->next);
	
	do
	{
		printf("| %d|%u |->  ",p->data,p->next);
		p = p->next;
	}while(p != tail->next);

// calling functions to delete
	
	tail = delAtBegn(tail);
	printList(tail);
	
	tail = delAtEnd(tail);
	printList(tail);
	
	tail = delAtPos(tail,3);
	printList(tail);
}