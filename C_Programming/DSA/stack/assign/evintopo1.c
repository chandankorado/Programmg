#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

#define size 40

int pop();
void push(int);

char postfix[size];
int stack[size], top = -1;

int main()
{
	int i, a, b, result, peval;
	char ch;
	
	for(i = 0; i < size; i++)
	{
		stack[i] = -1;
	}
	printf("/n Enter a postfix expression :");
	scanf("%s",postfix);
	
	for(i = 0; postfix[i] != '\0'; i++)
	{
		ch = postfix[i];
		
		if(isdigit(ch))
			push(ch-'0');
		else if(ch == '+' || ch == '-' || ch == '*' || ch == '/')
		{
			b = pop();
			a = pop();
			
			switch(ch)
			{
				case '+': result = a + b;
					break;
				case '-': result = a - b;
					break;
				case '*': result = a * b;
					break;
				case '/': result = a / b;
					break;
			}
			push(result);
		}
	}
	peval = pop();
	printf("\n The Postfix Evaluation is : %d\n",peval);
	return 0;
}

void push(int n)
{
	if(top < size-1)
		stack[++top] = n;
	else
	{
		printf("\n Stack is FULL !");
		exit(-1);
	}
}

int pop()
{
	int n;
	if(top > -1)
	{
		n = stack[top];
		stack[top--] = -1;
		return n;
	}
	else
	{
		printf("\n Stack is EMPTY !");
		exit(-1);
	}
}