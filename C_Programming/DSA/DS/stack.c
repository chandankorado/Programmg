#include<stdio.h>
struct node{
	int data;
	struct node *prev;
}*top=NULL;
void push(int val){
	struct node *node;
	node=(struct node*)malloc(sizeof(struct node));
	if(top==NULL){
		top=node;
		top->prev=NULL;
	}
	else{
		node->prev=top;
		top=node;
	}
	top->data=val;
}
void pop(){
	struct node*temp;
	if(top==NULL){
		printf("Underflow");
	}
	else{
		printf("%d",top->data);
		temp=top;
		top=top->prev;
		free(temp);
	}
}
int main(){
 int data,input;
 input=1;
 while(input){
		printf("choose the option \n1.PUSH\n2.POP or enter 0 to close");
		scanf("%d",&input);
		if(input==1){
			printf("\nenter element to be pushed:");
			scanf("%d",&data);
			push(data);
		}
		else if(input==2){
			pop();
		}
		else if(input!=0){
			printf("\nwrong option choosen");
		}
 }
}
