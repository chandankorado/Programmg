//multiple digit

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

struct stack		// Stack Type
{
	int top;
	unsigned capacity;
	int *array;
};

struct stack* createstack(unsigned capacity)
{
	struct stack *st = (struct stack*)malloc(sizeof(struct stack));
	if(!st) return NULL;
	
	st -> top = -1;
	st -> capacity = capacity;
	st -> array = (int*)malloc(st->capacity * sizeof(int));
	if(!st->array) return NULL;
	
	return st; 
}

int isEmpty(struct stack* st){
	return st->top == -1;
}
char peek(struct stack* st){
	return st->array[st->top];
}
char pop(struct stack* st)
{
	if(!isEmpty(st))
		return st->array[st->top--];
	return '$';
}
void push(struct stack *st, char op){
	st->array[++st->top] = op;
}


int evalPost(char* exp)
{
	struct stack* st = createstack(strlen(exp));
	int i;
	
	if(st == NULL) return -1;
	
	for(i=0; exp[i]; ++i)
	{
		if(isdigit(exp[i]))
			push(st, exp[i] - '0');
		else
		{
			int val1 = pop(st);
			int val2 = pop(st);
			
			switch(exp[i])
			{
				case '+': push(st, val2 + val1); break;
				case '-': push(st, val2 - val1); break;
				case '*': push(st, val2 * val1); break;
				case '/': push(st, val2 / val1); break;
			}
		}
	}
	return pop(st);
}

int main()
{
	//char exp[];
	char exp[] ="231*+9-";
	//printf("\nEnter the Postfix Expression : ");
	//scanf("%s",exp);
	printf("Postfix Evaluation : %d",evalPost(exp));
	return 0;
}