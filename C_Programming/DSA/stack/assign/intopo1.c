
// Program for infix to postfix conversion

#include<stdio.h>
#include<ctype.h>
char stack[100];
int top = -1;

void push(char x)
{
	stack[++top] = x;
}
char pop()
{
	if(top == -1)
		return -1;
	else
		return stack[top--];
}
int priority(char x)
{
	if(x == '(')
		return 0;
	if(x == '+' || x == '-')
		return 1;
	if(x == '*' || x == '/')
		return 2;
	if(x == '^')
		return 3;
	return 0;
}
int main()
{
	char exp[100];
	char *e, x;
	
	printf("Enter the Expression : ");
	scanf("%s",exp);
	printf("\n");
	e = exp;
	
	while(*e != '\0')
	{
		if(isalnum(*e))
			printf("%c",*e);
		else if(*e == '(')
			push(*e);
		else if(*e == ')')
		{
			while((x == pop()) != '(')
				printf("%c",x);
		}
		else
		{
			while(priority(stack[top]) >= priority(*e))
				printf("%c",pop());
			push(*e);
		}
		e++;
	}
	while(top != -1)
	{
		printf("%c",pop());
	}
	return 0;
}





/*


#include<stdio.h>
#include<stdlib.h>  
#include<ctype.h>
#include<string.h>

#define SIZE 100

char stack[SIZE];
int top = -1;

void push(char item)
{
  if(top >= SIZE-1)
  {
    printf("\nStack Overflow.");
  }
  else
  {
    top = top+1;
    stack[top] = item;
  }
}

char pop()
{
  char item ;

  if(top <0)
  {
    printf("stack under flow: invalid infix expression");
    getchar();
    // underflow may occur for invalid expression 
    // where ( and ) are not matched 
    exit(1);
  }
  else
  {
    item = stack[top];
    top = top-1;
    return(item);
  }
}

int is_operator(char symbol)
{
  if(symbol == '^' || symbol == '*' || symbol == '/' || symbol == '+' || symbol =='-')
  {
    return 1;
  }
  else
  {
  return 0;
  }
}

int precedence(char symbol)
{
  if(symbol == '^')
  {
    return(3);
  }
  else if(symbol == '*' || symbol == '/')
  {
    return(2);
  }
  else if(symbol == '+' || symbol == '-')          
  {
    return(1);
  }
  else
  {
    return(0);
  }
}

void InfixToPostfix(char infix_exp[], char postfix_exp[])
{ 
  int i, j;
  char item;
  char x;

  push('(');                               
  strcat(infix_exp,")");                

  i=0;
  j=0;
  item=infix_exp[i];        

  while(item != '\0') 
  {
    if(item == '(')
    {
      push(item);
    }
    else if( isdigit(item) || isalpha(item))
    {
      postfix_exp[j] = item;              
      j++;
    }
    else if(is_operator(item) == 1)        
    {
      x=pop();
      while(is_operator(x) == 1 && precedence(x)>= precedence(item))
      {
        postfix_exp[j] = x;                  
        j++;
        x = pop();                       
      }
      push(x);

      push(item);                
    }
    else if(item == ')')        
    {
      x = pop();                  
      while(x != '(')                
      {
        postfix_exp[j] = x;
        j++;
        x = pop();
      }
    }
    else
    {
      printf("\nInvalid infix Expression.\n");       
      getchar();
      exit(1);
    }
    i++;


    item = infix_exp[i]; 
  } 
  if(top>0)
  {
    printf("\nInvalid infix Expression.\n");        
    getchar();
    exit(1);
  }
  if(top>0)
  {
    printf("\nInvalid infix Expression.\n");        
    getchar();
    exit(1);
  }

  postfix_exp[j] = '\0';
  
}

int main()
{
  char infix[SIZE], postfix[SIZE];         

  printf("ASSUMPTION: The infix expression contains single letter variables and single digit constants only.\n");
  printf("\nEnter Infix expression : ");
  gets(infix);

  InfixToPostfix(infix,postfix);                   
  printf("Postfix Expression: ");
  puts(postfix);                     

  return 0;
}

/*


//Program

#include<stdio.h>
#include<string.h>
char stack[50];
int top=-1;
void post(char infix[]);
void push(char);
char pop();

void main()
{
    char infix[25];
    printf("\nENTER THE INFIX EXPRESSION = ");
    gets(infix);
    post(infix);
    getch();
}

void push(char symb)
{
    if(top>=49)
    {
          printf("\nSTACK OVERFLOW");
         getch();
         return;
    }
    else
    {
          top=top+1;
         stack[top]=symb;
    }
}
char pop()
{
     char item;
     if(top==-1)
     {
            printf("\nSTACK IS EMPTY");
            getch();
            return(0);
      }
      else
     {
            item=stack[top];
            top--;
     }
     return(item);
}
int preced(char ch)
{
      if(ch==47)
      {
             return(5);
      }
      else if(ch==42)
      {
            return(4);
      }
      else if(ch==43)
      {
             return(3);
      }
      else
      return(2);
}
void post(char infix[])
{
      int l;
      int index=0,pos=0;
      char symbol,temp;
      char postfix[40];
      l=strlen(infix);
      push('#');
      while(index<l)
      {
             symbol=infix[index];
             switch(symbol)
             {
                    case '(': push(symbol);
                    break;
                    case ')': temp=pop();
                    while(temp!='(')
                    {
                            postfix[pos]=temp;
                            pos++;
                            temp=pop();
                    }
                    break;
                    case '+':
                    case '-':
                    case '*':
                    case '/':
                    case '^':
                    while(preced(stack[top])>=preced(symbol))
                    {
                            temp=pop();
                            postfix[pos]=temp;
                            pos++;
                    }
                    push(symbol);
                    break;
                    default: postfix[pos++]=symbol;
                    break;
            }
            index++;
      }
      while(top>0)
      {
               temp=pop();
               postfix[pos++]=temp;
      }
       postfix[pos++]='\0';
       puts(postfix);
       return;
}


*/