#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *link;
};

count_of_nodes(struct node *head)
{
	int count = 0;
	if(head == NULL)
	{
		printf("Linked list is empty !");
	}
	else
	{
		struct node *ptr = NULL;
		ptr = head;
		while(ptr != NULL)
		{
			count++;
			ptr = ptr->link;
		}
	}
	printf("%d nodes are there !",count);
}

int main()
{
	struct node *head = malloc(sizeof(struct node));
	head->data = 23;
	head->link = NULL;
	
	struct node *current = malloc(sizeof(struct node));
	current->data = 34;
	head->link = current;
	
	current = malloc(sizeof(struct node));
	current->data = 45;
	current->link = NULL;
	
	head->link->link = current;
	
	count_of_nodes(head);
	return 0;
}