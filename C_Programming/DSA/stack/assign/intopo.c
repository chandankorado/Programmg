// Program for infix into postfix conversion only . 

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

#define max 100
char st[max];
int top = -1;

void push(char st[], char);
char pop(char[]);
void infix_to_postfix(char source[], char target[]);
int getpriority(char);

int main()
{
	char infix[100], postfix[100];
	printf("\n Enter any Infix Expression : ");
	gets(infix);
	strcpy(postfix, "");
	
	infix_to_postfix(infix, postfix);
	
	printf("\n the corresponding Postfix exprsn is : ");
	puts(postfix);
	getch();
	
	return 0;
}

void infix_to_postfix(char source[], char target[])
{
	int i = 0, j = 0;
	char temp;
	strcpy(target, "");
	while(source[i] != '\0')
	{
		if(source[i] == '(')
		{
			push(st, source[i]);
			i++;
		}
		else if(source[i] == ')')
		{
			while((top != -1) && (st[top] != '('))
			{
				target[j] = pop(st);
				j++;
			}
			if(top == -1)
			{
				printf("\n INCORRECT EXPRESSION .!");
				exit(1);
			}
			temp = pop(st);			// remove left parenthesis .
			i++;
		}
		else if(isdigit(source[i]) || isalpha(source[i]))
		{
			target[j] = source[i];
			j++;
			i++;
		}
		else if(source[i] == '+' || source[i] == '-' || source[i] == '*' || source[i] == '/' || source[i] == '%')
		{
			while((top != -1) && (st[top] != '(') && (getpriority(st[top])) > (getpriority(source[i])))
			{
				target[j] = pop(st);
				j++;
			}
			push(st, source[i]);
			i++;
		}
		else
		{
			printf("\n INCORRECT ELEMENT IN EXPRESSION !");
			exit(1);
		}
	}
	while((top != -1) && (st[top] != '('))
	{
		target[j] = pop(st);
		j++;
	}
	target[j] = '\0';
}
int getpriority(char op)
{
	if(op =='/' || op == '*' || op == '%')
		return 1;
	else if(op == '+' || op == '-')
		return 0;
}
void push(char st[], char val)
{
	if(top == max-1)
		printf("\n STACK OVERFLOW !");
	else
	{
		top++;
		st[top] = val;
	}		
}
char pop(char st[])
{
	char val = ' ';
	if(top == -1)
		printf("\n STACK OVERFLOW !");
	else
	{
		val = st[top];
		top--;
	}
	return val;
}