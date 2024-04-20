#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct node
{
	int data;
	struct node *next;
	struct node *prev;
}*head;

void creatLis(int n)
{
	struct node *newnode, *temp;
	int i,data;
	printf("Enter the no of nodes : \n");
	scanf("%d",&n);
	
	head = (struct node*)malloc(sizeof(struct node));
	printf("Enter data for first node : \n");
	scanf("%d",&data);
	
	head->prev = NULL;
	head->data = data;
	head->next = NULL;
	
	temp = head;
	for(i = 1; i < n; i++)
	{
		newnode = malloc(sizeof(struct node));
		printf("Enter the data for node %d : \n",i+1);
		scanf("%d",&data);
	
		newnode->prev = NULL;
		newnode->data = data;
		newnode->next = NULL;
		
		temp->next = newnode;
		newnode->prev = temp;
		temp = temp->next;
	}	
}
void display()
{
	struct node *temp = head;
	while(temp != NULL)
	{
		printf(" <-| %u | %d | %u |-> ",temp->prev,temp->data,temp->next);
		temp = temp->next;
	}
}

struct node *Delete(int value)
{
	struct node *ptr, *temp = head;
	
	if(head -> data == value)
	{
		head = head -> next;
		head->prev = NULL;
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
		ptr -> next -> prev = temp;
		free(ptr);
	}
	return head;
}
int main()
{
	int n,val;
	
	creatLis(n);
	
	display();
	printf("\nEnter the value to be delete : ");
	scanf("%d",&val);
	
	head = Delete(val);
	display();
	
	return 0;
}
























/*
for(i = 0; i <= n; i++)
	{
		newnode = (struct node*)malloc(sizeof(struct node));
		printf("\nEnter the value to be stored : ");
		scanf("%d",&newnode->data);
		newnode->next = NULL;
		if(i == 0)
		{
			head = newnode;
			head -> prev = NULL;
		}
		else
		{
			//newnode->data = value;
			//newnode->next = NULL;
			newnode->prev = temp;
			
			temp->next= newnode;
		}
	}
	
*/