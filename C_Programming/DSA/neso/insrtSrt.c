#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

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
			printf("| %d|%u |->  ",temp->data,temp->next);
			temp = temp->next;
		}
	}
}

struct node *insrtSrt(struct node *head, int data)
{
	struct node *ptr, *temp;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->data = data;
	
	ptr = head;
	while(ptr != NULL && ptr->next->data < data)
	{
		ptr = ptr->next;
	}
	temp->next = ptr->next;
	ptr->next = temp;
	
	return head;
}

int main()
{
	struct node *head, *prev, *temp;
	int n,i;
	
	printf("Enter the no. of nodes : \n");
	scanf("%d",&n);
	
	printf("Enter data to %d nodes : \n",n);
	
	for(i = 1; i <= n; i++)
	{
		temp = (struct node*)malloc(sizeof(struct node));	
		scanf("%d",&temp->data);
		temp->next = NULL;
		
		if(head == NULL)    // i == 0
			head = prev = temp;
		else
		{
			prev->next =temp;
			prev = prev->next;
		}
	}
		
	temp = head;
	
	printf("Linked  list is :\n\n");
	printf("\nAdd of Head is : | %u |\n\n",head);
	while(temp != NULL)
	{
		printf("| %d|%u |->  ",temp->data,temp->next);
		temp = temp->next;
	}

	head = insrtSrt(head,30);
	printList(head);

	return 0;
}
