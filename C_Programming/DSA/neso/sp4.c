#include<stdio.h>
#include<stdlib.h>

struct node
{
	int value;
	struct node *link;
};

void printList(struct node *head)
{
	struct node *temp;
	if(head == NULL)
		printf("List is Empty !\n");
	else
	{
		temp = head;
		printf("\nAdd of Head is : | %u |\n",head);
		while(temp != NULL)
		{
			printf("| %d|%u |->  ",temp->value,temp->link);
			temp = temp->link;
		}
	}
}

void rearrng(struct node* head)
{
	struct node *p, *q;
	int temp;
	if(!head || !head->link) return;
	p = head; q = head->link;
	while(q)
	{
		temp = p->value; p->value = q->value;
		q->value = temp; p = q->link;
		q = p ? p->link : 0;
	}
}

int main()
{
	struct node *head, *prev, *temp;
	int n,i;
	
	printf("Enter the no. of nodes : \n");
	scanf("%d",&n);
	
	printf("Enter value to %d nodes : \n",n);
	
	for(i = 1; i <= n; i++)
	{
		temp = (struct node*)malloc(sizeof(struct node));
		
		scanf("%d",&temp->value);
		temp->link = NULL;
		
		if(head == NULL)
		{
			head =temp;
			prev =temp;
		}
		else
		{
			prev->link =temp;
			prev = prev->link;
		}
	}
	printList(head);
	rearrng(head);
	printList(head);


	
/*	
	struct node *temp = head;
	
	printf("Linked  list is :\n\n");
	printf("Add of Head is : | %u |\n\n",head);
	while(temp != NULL)
	{
		printf("| %d|%u |->  ",temp->value,temp->link);
		temp = temp->link;
	}
*/
	return 0;
}
