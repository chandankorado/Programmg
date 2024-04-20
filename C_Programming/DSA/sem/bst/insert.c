#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *left;
	struct node *right;
}*tree;

struct node *insert(int val)
{
	struct node *ptr, *nodeptr, *parent;
	ptr = (struct node*)malloc(sizeof(struct node));
	
	ptr -> data = val;
	ptr -> left = ptr -> right = NULL;
	
	if(tree == NULL)
	{
		tree = ptr;
		ptr -> left = ptr -> right = NULL;
	}
	else
	{
		parent = NULL;
		nodeptr = tree;
		while(nodeptr != NULL)
		{
			parent = nodeptr;
			if(val < nodeptr -> data)
				nodeptr = nodeptr -> left;
			else
				nodeptr = nodeptr -> right;
		}
		if(val < parent -> data)
			parent -> left = ptr;
		else
			parent -> right = ptr;
	}
	return tree;
}

void preorder(struct node *traverse)
{
	if(traverse != NULL)
	{
		printf("%d\t",traverse -> data);
		preorder(traverse -> left);
		preorder(traverse -> right);
	}
}

void inorder(struct node *traverse)
{
	if(traverse != NULL)
	{	
		inorder(traverse -> left);
		printf("%d\t",traverse -> data);
		inorder(traverse -> right);
	}
}

void postorder(struct node *traverse)
{
	if(traverse != NULL)
	{	
		postorder(traverse -> left);
		postorder(traverse -> right);
		printf("%d\t",traverse -> data);
	}
}

struct node max(struct node *travel)
{
	if(travel != NULL)
	{
		if(travel -> right == NULL)
			printf("%d ",travel -> data);
		else
			max(travel -> right);
	}
}

struct node min(struct node *travel)
{
	if(travel != NULL)
	{
		if(travel -> left == NULL)
			printf("%d ",travel -> data);
		else
			max(travel -> left);
	}
}

int main()
{
	int i,j;
	printf("Enter no. of nodes to be insert : ");
	scanf("%d",&i);
	
	while(i)
	{
		printf("\nEnter node : ");
		scanf("%d",&j);
		insert(j);
		i--;
	}
	
	inorder(tree);
	printf("\n");
	preorder(tree);
	printf("\n");
	postorder(tree);
	printf("\n");
	
	printf("\nlargest val is  : ");
	max(tree);
	
	printf("\nsmallest val is  : ");
	min(tree);
	
	return 0;
}