#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct node{
	int data;
	struct node *next;
}*head;

void createList(int n){				// ctreating ssingle linked list
	struct node *newnode, *temp;
	int data, i;
	
	head = (struct node*)malloc(sizeof(struct node));
	if(head == NULL)
		printf("Unable to allocate memory !");
	else{
		printf("Enter the data to head : \n");
		scanf("%d",&data);
		
		head->data = data;
		head->next = NULL;
		
		temp = head;           // creating n nodes add to linked list
		for(i = 2; i<=n; i++){
			newnode = (struct node*)malloc(sizeof(struct node));
			
			if(newnode == NULL)
				printf("Unable to allocate memory for newnode !");
			else
			{
				printf("Data of node %d  :\n",i);
				scanf("%d",&data);
				
				newnode->data = data;
				temp->next = newnode;
				temp = temp->next;		
			}
		}
		printf("Single Linked List created successfully.\n");
	}
} 

void deletelastnode(){      // Delete last node
	struct node *toDelete, *secondLast;
	
	if(head == NULL)
		printf("List is Epty no need to Delete");
	else{
		toDelete = head;
		secondLast = head;
		
		while((toDelete->next) != NULL)
		{
			secondLast = toDelete;
			toDelete = toDelete->next;
		}
		if(toDelete == head)
			head = NULL;
		else
			secondLast->next = NULL;
			
		free(toDelete);
		printf("Successfully deleted last node .");
	}
}

void displayList(){						// display list{
	struct node *temp;
	if(head == NULL)
		printf("List is Empty !");
	else{
		temp = head;
		
		while(temp != NULL){
			printf("| %d|%u |->  ",temp->data,temp->next);
			temp = temp->next;
		}
	}
}

int main(){
	int n, choice;
	
	printf("Enter the no. of nodes : \n");
	scanf("%d",&n);
	createList(n);
	
	printf("Print the List :\n\n");
	displayList();
	
	printf("\nPress 1 to delete last node : ");
	scanf("%d",&choice);
	
	if(choice == 1)
		deletelastnode();
	printf("\nNow Data in the list  :\n");
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


// ctreating ssingle linked list

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
		printf("Single Linked List created successfully.\n");
	}
}

// Delete last node 

void deletelastnode()
{
	struct node *toDelete, *secondLast;
	
	if(head == NULL)
	{
		printf("List is Epty no need to Delete");
	}
	else
	{
		toDelete = head;
		secondLast = head;
		
		while((toDelete->next) != NULL)
		{
			secondLast = toDelete;
			toDelete = toDelete->next;
		}
		
		if(toDelete == head)
			head = NULL;
		else
			secondLast->next = NULL;
			
		free(toDelete);
		printf("Successfully deleted last node .");
	}
}

// display list

void displayList()
{
	struct node *temp;
	if(head == NULL)
		printf("List is Empty !");
	else
	{
		temp = head;
		while(temp != NULL)
		{
			printf("| %d|%u |->  ",temp->data,temp->next);
			temp = temp->next;
		}
	}
}


int main()
{
	int n, choice;
	
	printf("Enter the no. of nodes : \n");
	scanf("%d",&n);
	
	createList(n);
	
	printf("Print the List :\n\n");
	displayList();
	
	printf("\nPress 1 to delete last node : ");
	scanf("%d",&choice);
	
	if(choice == 1)
	{
		deletelastnode();
	}	
	printf("\nNow Data in the list  :\n");
	displayList();
	
	return 0;	
}

*/