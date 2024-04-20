#include<stdio.h>
#include<ctype.h>
#define size 100
char stack[size];
int top=-1;
void display();
void push(char);
char pop(); 
int priority(char);
int main(){
	char exp[100];
	int i;
	char x;
	i=0;
	printf("\n enter the expression:");
	scanf("%s",exp);
	while(exp[i]!='\0'){
		printf("%c",exp[i]);
	}
	/*while(exp[i]!='-'){
		if(isalnum(exp[i])){
			printf("%c",exp[i]);
		}
	
		
	

		else if(exp[i]=='('){
			push(exp[i]);
		}
		else if(exp[i]==')'){
			while(stack[top]!='('){
				printf("%c",pop());
				
				
				
			}
		}
		else{
				while(priority(exp[i])<=priority(stack[top])){
					printf("%c",pop());
				}
			
			push(exp[i]);
		}
		i++;
		}
		display();*/
	}
	

int priority(char x){


	

	if(x=='^')
		return 3;
	
	if(x=='*'||x=='/')
		return 2;
	
	if(x=='+'||x=='-')
		return 1;
	return 0;
}
void push(char x){
	

		top++;
		stack[top]=x;
}

char  pop(){
	char x;
	if(top==-1){
		printf("\nunderflow\n");
		
	}
	else{
		x=stack[top];
		
		top--;
	
		
	}
	return x;
	
	
}
void display(void){
	printf("%d",top);
	/*while(top!=-1){
		printf("%c\t",pop());
	}*/
}

