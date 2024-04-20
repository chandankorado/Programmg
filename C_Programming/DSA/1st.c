/*
#include <stdio.h>
#include <stdlib.h>

 // create single  linked list with 3 nodes.
 
struct node
 {
     int data;
     struct node *next;
 };
// print the data of listt

void printList(struct node* n)
 {
     while (n != NULL)
     {
         printf("%d\n", n->data);
         n=n->next;
     }
 }

int main()
{
  // create nodes for storing.
    struct node *head = NULL;
    struct node *second = NULL;
    struct node *third = NULL;

 // allocate memory to the nodes.
    head  = (struct node*)malloc(sizeof(struct node));
    second  = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));

 // enter the data and link the nodes
    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;
    
    printList(head);
    return 0;
}


*/



#include <stdio.h>
#include <stdlib.h>

struct node
{
    int value;
    struct node *next;
};

int main()
{
	struct node *firstnode;
	firstnode=(struct node*)malloc(sizeof(struct node));
	firstnode->value=10;
	

	printf("%d\n",firstnode->value);

	struct node *secondnode;                //newnode
	secondnode=(struct node*)malloc(sizeof(struct node));
	secondnode->value=20;
	
	firstnode->next=secondnode;
	
	secondnode->next=NULL;

	printf("%d",secondnode->value);
	
	return 0;
}