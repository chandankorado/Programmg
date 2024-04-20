#include<stdio.h>
#include<stdlib.h>

struct node
{
	struct node *prev;
	int data;
	struct node *next;
};

struct node *delAtBegn(struct node *tail)
{
	struct node *temp = tail->next;
	temp->next->prev = tail;
	tail->next = tail->next->next;
	free(temp);
	temp = NULL;
	return tail;
}

struct node *delAtEnd(struct node *tail)
{
	struct node *temp = tail;
	tail->next->prev = tail->prev;
	tail->prev->next = tail->next;
	tail = tail->prev;
	free(temp);    // segmentation fault if use  ' free(tail->next); '
	temp = NULL;	// so temp = tail->next is necessary .. to this system
	return tail;
}

struct node *delAtPos(struct node *tail, int pos)
{
	struct node *ptr, *temp;
	ptr = tail->next;
	--pos;
	while(pos != 1)
	{
		ptr = ptr->next;
		pos--;
	}
	temp = ptr->next;
	ptr->next = ptr->next->next;
	ptr->next->next->prev = ptr;
	free(temp);
	temp = NULL;
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
	
	tail = delAtBegn(tail);
	printList(tail);
	tail = delAtEnd(tail);
	printList(tail);
	tail = delAtPos(tail,3);
	printList(tail);
	
	return 0;
}