#include<stdio.h>
#include<stdlib.h>

struct node
{
	struct node *prev;
	int data;
	struct node *next;
};

struct node *addAtBegn(struct node *tail, int data)
{
	struct node *temp = (struct node*)malloc(sizeof(struct node));
	temp->data = data;
	temp->next = tail->next;
	temp->prev = tail;
	tail->next->prev = temp;  //temp->next->prev = temp;
	tail->next = temp;
	
	return tail;
}

struct node *addAtEnd(struct node *tail, int data)
{
	struct node *temp = (struct node*)malloc(sizeof(struct node));
	temp->data = data;
	temp->next = tail->next;
	temp->prev = tail;
	tail->next->prev = temp;  //temp->next->prev = temp;
	tail->next = temp;
// just add this to addatbegn 	
	tail = temp;
	return tail;
}

struct node *addAtPos(struct node *tail, int data, int pos)
{
	struct node *temp, *befor;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->data = data;
	
	befor = tail->next;
	--pos;
	while(pos != 1)
	{
		befor = befor->next;
		pos--;
	}
	temp->next = befor->next;
	temp->prev = befor;
	befor->next->prev = temp;  //
	befor->next = temp;
	return tail;
}

void printList(struct node *tail)
{
	struct node *ptr = tail->next;
	if(ptr == NULL)
		printf("List is Empty !\n");
	else
	{
		printf("\n\nAdd of first node is : | %u |\n",ptr);
		do
		{
			printf("<-| %u| %d |%u |-> ",ptr->prev,ptr->data,ptr->next);
			ptr = ptr->next;
		}while(ptr != tail->next);
	}
}

int main()
{
	struct node *tail, *temp, *ptr;
	int n,i,data;
	printf("Enter the no of nodes : \n");
	scanf("%d",&n);
	
	tail = (struct node*)malloc(sizeof(struct node));
	printf("Enter data for first node : ");
	scanf("%d",&data);
	
	tail->prev = tail;
	tail->data = data;
	tail->next = tail;
	
	for(i = 1; i < n; i++)
	{
		struct node *temp = (struct node*)malloc(sizeof(struct node));
		printf("\nEnter data for %d node : ",i+1);
		scanf("%d",&data);
		
		temp->data = data;
		temp->next = tail->next;
		temp->prev = tail;
		tail->next->prev = temp;  //temp->next->prev = temp;
		tail->next = temp;
		
		tail = temp;
	}	
	
	ptr = tail->next;
	if(ptr == NULL)
		printf("List is Empty !\n");
	else
	{
		printf("\n\nAdd of first node is : | %u |\n",ptr);
		do
		{
			printf("<-| %u| %d |%u |-> ",ptr->prev,ptr->data,ptr->next);
			ptr = ptr->next;
		}while(ptr != tail->next);
	}
	
	tail = addAtBegn(tail,11);
	printList(tail);
	tail = addAtEnd(tail,99);
	printList(tail);
	tail = addAtPos(tail,33,3);
	printList(tail);
	
}