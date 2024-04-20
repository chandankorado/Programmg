#include<stdio.h>
#include<stdlib.h>
#define max 3

int st[max], top = -1;

void push(int st[],int val);
int pop(int st[]);
int peek(int st[]);
void display(int st[]);

int main(int argc, char *argv[])
{	
	int val, option;
	do
	{
		printf("\n **** MAIN MENU ****");
		printf("\n 1.PUSH");
		printf("\n 2.POP");
		printf("\n 3.PEEK");
		printf("\n 4.DISPLAY");
		printf("\n 5.EXIT");
		printf("\n Enter your option :");
		scanf("%d",&option);
		switch(option)
		{
			case 1 : 
				printf("Enter the number to push on stack : ");
				scanf("%d",&val);
				push(st, val);
				break;
			case 2 : 
				val = pop(st);
				if(val != -1)
					printf("\n The value deleted from stack is : %d",val);
				break;
			case 3 : 
				val = peek(st);
				if(val != -1)
					printf("\n The value stored at top of the  stack is : %d",val);
				break;
			case 4 :
				display(st);
				break;
			case 5 :
				printf("You Chose the incorrect Option !");
				break;
		}
	}while(option != 5);
	return 0;
}

void push(int st[],int val)
{
	if(top == (max-1))
		printf("STACK OVERFLOW !");
	else
	{
		top++;
		st[top] = val;
	}
}

int pop(int st[])
{
	int val;
	if(top == -1)
		printf("STACK UNDERFLOW !");
	else
	{
		val = st[top];
		top--;
		return val;
	}
}

int peek(int st[])
{
	if(top == -1)
	{
		printf("STACK IS EMPTY !");
		return -1;
	}
	else
		return (st[top]);
}

void display(int st[])
{
	int i;
	if(top == -1)
		printf("STACK IS EMPTY !");
	else
	{
		for(i = top; i > 0; i--)
			printf("\n| %d |\n",st[i]);
	}
}