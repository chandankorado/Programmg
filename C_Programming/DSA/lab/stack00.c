#include<stdio.h>

int stack[100], n, i, value, choice, top;

void push();
void pop();
void display();

int main()
{
	top = -1;
	printf("\nEnter the size of the stack : ");
	scanf("%d",&n);
	
	do
	{
		printf("\nSTACK OPerations:\n");
		printf("\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n");
		
		printf("\nEnter the choice :  ");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1: push();
				break;
			case 2: pop();
				break;
			case 3: display();
				break;
			case 4: printf("\nEXIT POINT !");
				break;
			default : printf("\nInvalid choice ..\nChoose correct choice : \n");
				break;			
		}
	}while(choice != 4);
	
	return 0;
}
void push()
{
	if(top >= n-1)
		printf("\nSTACK OVERFLOW !\n");
	else
	{
		printf("\nEnter the value to be insert in the Stack : ");
		scanf("%d",&value);
		
		stack[++top] = value;
	}
}

void pop()
{
	if(top <= -1)
		printf("\nSTACK Underflow !\n");
	else
		printf("\n %d is pop out from stack ! \n",stack[top--]);
}

void display()
{
	
	if(top >= 0)
	{	
		printf("\nElements in Stack is : \n");
		for(int i = top; i >= 0; i--)
		printf("\n %d \n",stack[i]);
	}	
	else  printf("\nstack is Empty !\n");
}







/*
#include<stdio.h>
int stack[100],choice,n,top,x,i;
void push(void);
void pop(void);
void display(void);

int main()
{
    top=-1;
    printf("\n Enter the size of STACK[MAX=100]:");
    scanf("%d",&n);
    
    do
    {
    	printf("\n\t STACK OPERATIONS USING ARRAY\n\n");
	    printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.EXIT");
    	
        printf("\n Enter the Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: push();
                	break;
            case 2: pop();
                	break;
            case 3: display();
                	break;
            case 4: printf("\n\t EXIT POINT ");
               		break;
            default: printf ("\n\t Please Enter a Valid Choice(1/2/3/4)");
        }
    }
    while(choice!=4);
    return 0;
}
void push()
{
    if(top>=n-1)
        printf("\n\tSTACK is over flow");
    else
    {
        printf(" Enter a value to be pushed:");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}
void pop()
{
    if(top<=-1)
        printf("\n\t Stack is under flow");
    else
    {
        printf("\n\t The popped elements is %d",stack[top]);
        top--;
    }
}
void display()
{
    if(top>=0)
    {
        printf("\n The elements in STACK \n");
        for(i=top; i>=0; i--)
            printf("\n%d",stack[i]);
        printf("\n Press Next Choice");
    }
    else printf("\n The STACK is empty");  
}
*/