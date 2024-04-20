/*
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int st[max], max, value, top = -1;
	printf("Enter the number of elements want to push on stack : ");
	scanf("%d",&max);
	
	
	
}

*/






#include<stdio.h>
#include<stdlib.h>
int max,top = -1;
int st[max];

void push(int st[],int val);
int pop(int st[]);
int peek(int st[]);
void display(int st[]);

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
		for(i = top; i >= 0; i--)
			printf("\n| %d |\n",st[i]);
	}
}

int main()
{	
	int max,top = -1;
	int st[max];
	int val, option;
	
	printf("Enter the number of elements want to push on stack : ");
	scanf("%d",&max);
	do
	{
		printf("\n\n **** MAIN MENU ****");
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
				if(top == (max-1))
		        	printf("STACK OVERFLOW !");
		        else
		        {
					printf("Enter the number to push on stack : ");
					scanf("%d",&val);
					push(st, val);
				}
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
				printf("\nExited from stack !");
				break;
		}
	}while(option != 5);
	return 0;
}

/*



*/