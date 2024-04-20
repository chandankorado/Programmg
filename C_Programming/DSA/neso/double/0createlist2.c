#include<stdio.h>
#include<stdlib.h>

struct node
{
	struct node *prev;
	int data;
	struct node *next;
};

struct node *delAtBegn(struct node *head)
{
	struct node *temp = head;
	head = head->next;
	free(head->prev);
	head->prev = NULL;
	
	return head;
}

struct node *delAtLast(struct node *head)
{
	struct node *ptr, *temp;
	ptr = head;
	while(ptr != NULL)
		ptr = ptr->next;
	temp = ptr;
	ptr->prev->next = NULL;
	free(temp);
	temp = NULL;
	return head;
}

struct node *delAtPos(struct node *head, int pos)
{
	struct node *temp;			// *temp2
	temp = head;
	
	while(pos != 1)
	{
		temp = temp->next;
		pos--;
	}
	temp->next->prev = temp->prev;		//temp2 = temp->next->next;
	temp->prev->next = temp->next;
	free(temp);				//temp2->prev = temp;
	temp = NULL;				//temp->next = temp2

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
		printf("\n\nAdd of Head is : | %u |\n",head);
		while(temp != NULL)
		{
			printf("<-| %u| %d |%u |-> ",temp->prev,temp->data,temp->next);
			temp = temp->next;
		}
	}
}

int main()
{
	struct node *head, *temp, *ptr;
	int n,i,data;
	printf("Enter the no of nodes : \n");
	scanf("%d",&n);
	
	head = (struct node*)malloc(sizeof(struct node));
	printf("Enter data for first node : \n");
	scanf("%d",&data);
	
	head->prev = NULL;
	head->data = data;
	head->next = NULL;
	
	ptr = head;
	for(i = 1; i < n; i++)
	{
		temp = malloc(sizeof(struct node));
		printf("Enter the data for node %d : \n",i+1);
		scanf("%d",&data);
	
		temp->prev = NULL;
		temp->data = data;
		temp->next = NULL;
		
		ptr->next = temp;
		temp->prev = ptr;
		ptr = ptr->next;
	}		
	
	ptr = head;
	printf("Add of Head is : | %u |\n",head);
	while(ptr != NULL)
	{
		printf("<-| %u| %d |%u |-> ",ptr->prev,ptr->data,ptr->next);
		ptr = ptr->next;
	}
	
	head = delAtBegn(head);
	printList(head);
	
	head = delAtLast(head);
	printList(head);
	
	head = delAtPos(head,4);
	printList(head);
	
	return 0;
}