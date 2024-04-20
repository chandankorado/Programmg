#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

int search(struct node *tail,int data)
{
	struct node *temp = tail->next;
	int index = 0;
	do
	{
		if(temp->data == data)
			return index;
		temp = temp->next;
		index++;
	}while(temp != tail->next);
	
	return index;
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
	
	data = search(tail,4);
	printf("\n\n%d index in this list !",data);
	return 0;
}