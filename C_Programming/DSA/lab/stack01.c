
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct stack
{
	int data;
	struct stack *next;
};

struct stack *top = NULL;
void push();
void pop();
void peek();
void display();

int main()
{
	int val, option;
	do
	{		
		printf("\nOptions\n\n 1.PUSH\n 2.POP\n 3.PEEK\n 4.DISPLAY\n 5.EXIT\n\n");
		printf("\n choose an Option : ");
		scanf("%d",&option);
		switch(option)
		{
			case 1: push();
					break;
			case 2: pop();
					break;
			case 3: peek();
					break;
			case 4: display();
					break;
			default : printf("\nInvalid option...Try again..");
					  break;
		}
	}while(option != 5);

	return 0;
}
void push()
{
	int val;
	struct stack *newnode = (struct stack*)malloc(sizeof(struct stack));
	if(newnode == NULL)
		printf("\nunable to push..");
	else
	{
		printf("\nEnter the value to push : ");
		scanf("%d",&val);
		
		if(top == NULL)
		{
			newnode -> data = val;
			newnode -> next = NULL;
			top = newnode;
		}
		else
		{
			newnode -> data = val;
			newnode -> next = top;
			top = newnode;
		}
		printf("\n %d is pushed .",val);
	}	
}
void pop()
{
	struct stack *temp;
	if(top = NULL)
		printf("\n Stack underflow..");
	else
	{
		temp = top;
		printf("\n poping value is %d .",top->data);
		top = top -> next;
		free(temp);
	}
}
void peek()
{
	if(top = NULL)
		printf("\n Stack underflow..");
	else printf("\n value in the top is :  %d .",top->data);
}
void display()
{
	struct stack *temp = top;
	if(top == NULL)
		printf("\nStack is empty .");
	else{
		printf("\nElements are in stack : \n");
		while(temp != NULL)
		{
			printf("| %d | %u |\n\n",temp->data,temp->next);
			temp = temp->next;
		}
	}
}
