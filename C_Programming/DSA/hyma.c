#include<stdio.h>
#include<stdlib.h>

// Declared structured node

typedef struct node
{
	int data;
	struct node *next;
}node;

int main()
{
	int len,i;
	printf("Enter the length of the linked list : "); 		// No of nodes
	scanf("%d",&len);					
	
	struct node *headnode, *currentnode, *temp;		// Creating three pointers to struct node
	
	for(i=0;i<len;i++)
	{
		currentnode = (node*)malloc(sizeof(node));
		printf("Enter the element in %d node",i+1);
		scanf("%d",currentnode->data);
		
		printf("\n%d = %u\n",currentnode->data,currentnode->next);
		
		if(i==0)
		{	
			headnode = temp = currentnode;
			currentnode->next = NULL;
		}
		else
		{
			temp->next = currentnode;
			temp = currentnode;
			currentnode->next = NULL;
		}
	}
	temp->next = NULL;
	temp = headnode;
	printf("linked list = \n");
	printf("starting pointer value = %d \n",temp);
	while(temp != NULL)
	{
		printf("| %d | -> | %u |\n",temp->data,temp->next);
		temp = temp->next;
	}
}