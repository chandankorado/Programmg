#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct node
{
	int data;
	struct node *next;
}*head;


// creating single linked list

void createList(int n)
{
	struct node *newnode, *temp;
	int data, i;
	
	head = (struct node*)malloc(sizeof(struct node));
	
	if(head == NULL)
		printf("Unable to allocate memory !");
	else
	{
		printf("Enter the data to head : \n");
		scanf("%d",&data);
		
		head->data = data;
		head->next = NULL;
		
		temp = head;
		
		// creating n nodes add to linked list
		
		for(i = 2; i<=n; i++)
		{
			newnode = (struct node*)malloc(sizeof(struct node));
			
			if(newnode == NULL)
				printf("Unable to allocate memory for newnode !");
			else
			{
				printf("Data of node %d  :\n",i);
				scanf("%d",&data);
				
				newnode->data = data;
				newnode->next = NULL;
				
				temp->next = newnode;
				temp = temp->next;		
			}
		}
		printf("Single Linked List created successfully.\n\n");
	}
}

// display list

void displayList()
{
	struct node *temp;
	if(head == NULL)
		printf("List is Empty !\n");
	else
	{
		temp = head;
		printf("Add of Head is : | %u |\n",head);
		while(temp != NULL)
		{
			printf("| %d|%u |->  ",temp->data,temp->next);
			temp = temp->next;
		}
	}
}


int main()
{
	int n;
	
	printf("Enter the no. of nodes : \n");
	scanf("%d",&n);
	
	createList(n);
	
	printf("Print the List :\n\n");
	displayList();
	
	return 0;	
}
