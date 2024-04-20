#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *left;
	struct node *right;
}*root;

void Addnode();
void inOrder();
void preOrder();
void postOrder();


void main()
{
	int choice;
	do
	{
		printf("\nOPERATIONS in TREE :\n");
		printf("\n1.AddNode\n2.DeleteNode\n3.InOrder\n4.PreOrder\n5.PostOrder\n");
		printf("\nChoose the option : ");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1: Addnode();
				break;
			case 2: printf("\n node will be deleted . \n");
				break;
			case 3: inOrder();
				break;
			case 4: preOrder();
				break;
			case 5: postOrder();
				break;
			case 6: printf("\nEXIT POINT ..\n");
				break;
			default : printf("\nInvalid choice ..Try again..: ");
				break;
		}
	}while(choice != 6);
}
void Addnode()
{
	struct node *prev, *temp, *newnode;
	int data;
	
	printf("\nEnter the data to the node : ");
	scanf("%d",&data);
	
	newnode = (struct node*)malloc(sizeof(struct node));
	newnode -> data = data;
	newnode -> left = newnode -> right = NULL;
	
	if(root == NULL)
		root = newnode;
	else
	{
		temp = prev = root;
		while(temp != NULL)
		{
			prev = temp;
			if(temp -> data <= data)
				temp = temp -> right;
			else
				temp = temp -> left;
		}
		if(prev -> data <= data)
			prev -> right = newnode;
		else
			prev -> left = newnode;
	}	
}

void inOrder()
{
	struct node *traverse = root;
	
	if(traverse != NULL)
	{
		inOrder(traverse -> left);
		printf(" %d ",traverse -> data);
		inOrder(traverse -> right);
	}
}

void preOrder()
{
	struct node *traverse = root;
	
	if(traverse != NULL)
	{
		printf(" %d ",traverse->data);
		inOrder(traverse -> left);
		inOrder(traverse -> right);
	}
}

void postOrder()
{
	struct node *traverse = root;
	
	if(traverse != NULL)
	{
		inOrder(traverse -> left);
		inOrder(traverse -> right);
		printf(" %d ",traverse->data);
	}
}