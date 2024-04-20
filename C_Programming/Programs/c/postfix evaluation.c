#include<stdio.h>
#include<ctype.h>
#include<string.h>
# define N 100
int stack[N],top=-1;
void push(int x);
int pop();
int main(){
	char post[100];
	int i,a,b,val;
	printf("enter the postfix expression=");
	scanf("%s",post);
	for(i=0;post[i]!='\0';i++){
		if(isdigit(post[i])){
			push(post[i]-48);
		}
		else {
		a=pop();
		b=pop();
		switch(post[i]){
			case'*':
				val=b*a;
				push(val);
				break;
			case'/':
				val=b/a;
				push(val);
				break;
			case'%':
				val=b%a;
				push(val);
				break;
			case'^':
				val=b^a;
				push(val);
				break;
			case'+':
				val=b+a;
				push(val);
				break;
			case'-':
				val=b-a;
				push(val);
				break;
			default:
				printf("\nINVALID\n");
									
				
	}
			
		}
	
	

	}
	printf("the result of expression =%d",pop());
	
}
void push(int x){
	if(top==N-1){
		printf("overflow");
	}
	else{
		top++;
		stack[top]=x;
	}
}
int pop(){
	int x;
	
		x=stack[top];
		top--;
		return x;	
	
	
}
