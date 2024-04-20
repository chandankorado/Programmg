#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

void count(struct node *tail)
{
	struct node *temp = tail->next;
	int count = 0;
	do
	{
		count++;
		temp = temp->next;
	}while(temp != tail->next);
	printf("\n\n%d  nodes in this list !",count);
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
	
	count(tail);
	return 0;
}