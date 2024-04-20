#include<stdio.h>
#include<stdlib.h>
struct stack
{
	int data;
	struct stack *next;
};
struct stack *top,*str;
void pop();
void push(int);
void display();
main()
{
	int x;
	printf("\nmenu:");
	printf("\n1.push\n2.pop\n3.display\n");
	int o;
	do
	{
	printf("\nenter your choice:");
	scanf("%d",&o);
	switch(o)
	{
	case 1:
	push(x);
	break;
	case 2:
	pop();
	break;
	case(3):
	display();
	break;
	default:
	exit(0);
}
}while(1<=o<=3);
}
void push(int a)
{
	struct stack *newnode;
	newnode=(struct stack*)malloc(sizeof(struct stack));
	printf("Enter the value to push into stack:");
	scanf("%d",&a);
	newnode->data=a;
	if(top==NULL)
	{
		top=newnode;
		str=newnode;
		newnode->next=NULL;
	}
	else
	{
		newnode->next=top;
		top=newnode;
		str=newnode;	
	}
}
void pop()
{
	if(top==NULL)
	{
		printf("Stack is underflow");
	}
	else
	{
	struct stack *ptr;
	ptr=top;
	top=top->next;
	str=top;
	printf("deleted element:%d",ptr->data);
	free(ptr);
	}
}
void display()
{
	if(top==NULL)
	{
		printf("Stack is Empty");
	}
	else
	{
	struct stack *ptr;
	ptr=top;
	printf("The Stack:\n");
	while(ptr!=NULL)
	{
	printf("%d -> %u|\t",ptr->data,ptr->next);
	ptr=ptr->next;
	}
	//printf("\nstart pointer:%d",str->data);
	}
}
