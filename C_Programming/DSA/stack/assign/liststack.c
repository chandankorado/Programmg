#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct stack
{
    int data;
    struct stack *next;
};

struct stack *top = NULL;
struct stack *push(struct stack *, int);
struct stack *pop(struct stack *);
struct stack *display(struct stack *);
int peek(struct stack *);


int main(int argc, char argv[])
{
    int val, option; 
    do
    {
    	printf("\n\n\n 1.PUSH\n 2.POP\n 3.PEEK\n 4.DISPLAY\n 5.EXIT\n\n\n");

    	printf("\n Enter Your Option : ");
    	scanf("%d",&option);
    	
    	switch(option)
    	{
    		case 1:
    			printf("\n\nEnter the element to be pushed on stack : ");
    			scanf("%d",&val);
    			top = push(top, val);
    			break;
    		case 2:
    			top = pop(top);
    			break;
    		case 3:
    			val = peek(top);
    			if(val == -1)
    				printf("\nSTACK is EMPTY !");
    			else
    				printf("\n%d is the value at the top !",val);
    			break;
    		case 4:
    			top = display(top);
    			break;
		}
    }while(option != 5);
    return 0;
}
struct stack *push(struct stack *top, int val)
{
	struct stack *ptr;
	ptr = (struct stack*)malloc(sizeof(struct stack));
	ptr -> data = val;
	ptr -> next = NULL;
	if(ptr == NULL)
	{
		ptr -> next = NULL;
		top = ptr;
	}
	else
	{
		ptr -> next = top;
		top = ptr;
	}
	return top;
}
struct stack *pop(struct stack *top)
{
	struct stack *ptr;
	if(top == NULL)
		printf("\nSTACK OVERFLOW !");
	else
	{
		ptr = top;
		top = top -> next;
		printf("\n%d id the deleted element",ptr -> data);
		free(ptr);
	}
	return top;
}
struct stack *display(struct stack *top)
{
	struct stack *ptr;
	ptr = top;
	if(top == NULL)
		printf("\nSTACK OVERFLOW !");
	else
	{
		printf("\n-STACK-");
		while(ptr != NULL)
		{
			printf("\n| %d |",ptr -> data);
			ptr = ptr ->next;
		}
	return top;
	}
}
int peek(struct stack *top)
{
	if(top == NULL)
		return -1;
	else
		return top -> data;
}