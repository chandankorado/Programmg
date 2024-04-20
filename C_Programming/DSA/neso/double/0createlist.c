#include<stdio.h>
#include<stdlib.h>

struct node
{
	struct node *prev;
	int data;
	struct node *next;
};

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
	return 0;
}