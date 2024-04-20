
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct node
{
	int data;
	struct node *next;
}*head;


// ctreating ssingle linked list

void createList(int n)
{
	struct node *newnode, *temp;
	int data, i;
	
	printf("Enter the no. of nodes : \n");
	scanf("%d",&n);
	
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

struct node *Delete(int value)
{
	struct node *ptr, *temp = head;
	
	if(head -> data == value)
	{
		head = head -> next;
		free(temp);
	}
	
	while(temp->next->data != value)
		temp = temp -> next;
	
	if(temp->next-> data == value && temp->next->next == NULL)
	{
		free(temp->next);
		temp->next = NULL;
	}
	else if(temp->next-> data == value && temp->next->next != NULL)
	{
		ptr = temp->next;
		temp->next = ptr -> next;
		free(ptr);
	}
	return head;
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
	int n,value;
	
	createList(n);
	
	printf("Print the List :\n\n");
	displayList();
	
	printf("\nEnter the data to delete  : ");
	scanf("%d",&value);
	
	Delete(value);
	
	displayList();
	
	return 0;	
}
/*
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct node
{
	int data;
	struct node *next;
}*head;

void creatList(int n)
{
	struct node *newnode, *temp;
	int data, i;
	for(i = 0; i <= n; i++)
	{
		newnode = (struct node*)malloc(sizeof(struct node));
		printf("\n Enter the data to be stored : ");
		scanf("%d",&data);
		if(i == 0){
			head -> data = data;
			head -> next = NULL;
			temp = head;
		}
		else{
			newnode -> data = data;
			newnode -> next = NULL;
				
			temp -> next = newnode;
			temp = temp -> next;
		}
	}
	printf("\n Singly linked list created successfully.");
}
struct node *deleteval(int value)
{
	struct node *ptr, *temp = head;
	
	if(head -> data == value)
	{
		head = head -> next;
		free(temp);
	}
	
	while(temp->next->data != value)
		temp = temp -> next;
	ptr = temp->next;
	temp->next = temp -> next -> next;
	free(ptr);
	
	return head;
}

void display()
{
	struct node *temp;
	if(head == NULL)
		printf("\n List is Empty !");
	else{
		temp = head;
		printf("\nAdd of head : | %u |\n\n",head);
		while(temp != NULL)
		{
			printf("| %d | -> | %u | ->",temp->data,temp->next);
			temp = temp -> next;
		}
	}
}
int main()
{
	int n, value;
	
	printf("Enter the no. of nodes : \n");
	scanf("%d",&n);
	
	creatList(n);
	
//	printf("Print the List :\n\n");
	//display();
	
	printf("\nEnter the data to delete  : ");
	scanf("%d",&value);
	
	deleteval(value);
	
	display();
	return 0;	
}
*/
