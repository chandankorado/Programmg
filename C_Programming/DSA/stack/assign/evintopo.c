// Evaluating Postfix Expression( single digit, two operator ) 

#include<stdio.h>
#define max 20

typedef struct stack
{
	int top;
	int data[];
}stack;

void init(stack*);
int empty(stack*);
int full(stack*);
int pop(stack*);
void push(stack*, int);
int evaluate(char x,int op1,int op2);

int main()
{
	stack s;
	char x;
	int op1, op2, val;
	init(&s);
	printf("Enter expression (eg : 59+3*)  : ");
	while(x = getchar() != '\0')
	{
		if(isdigit(x))
			push(&s, x-48)	;	// x-48 for removing the effect of ASCII
		else
		{
			op2 = pop(&s);
			op1 = pop(&s);
			val = evaluate(x,op1,op2);
			push(&s,val);
		}
	}
	val = pop(&s);
	printf("\n Value of Expression : %d",val);
	
	return 0;
}

int evaluate(char x, int op1, int op2)
{
	if(x == '+')
		return(op1+op2);
	if(x == '-')
		return(op1-op2);
	if(x == '*')
		return(op1*op2);
	if(x == '/')
		return(op1/op2);
	if(x == '%')
		return(op1%op2);
}

void init(stack *s)
{
	s -> top = -1;
}
int empty(stack *s)
{
	if(s -> top == -1)
		return(1);
	return(0);
}
int full(stack *s)
{
	if(s -> top == (max-1))
		return(1);
	return(0);
}
void push(stack *s, int x)
{
	s->top = s->top + 1;
	s->data[s->top] = x;
}
int pop(stack *s)
{
	int x;
	x = s->data[s->top];
	s->top = s->top - 1;
	return(x);
}