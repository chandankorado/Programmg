#include<stdio.h>
struct node{
	struct node *previous;
	int data;
	struct node *next;
}*head;
void print();
void del_node(int);
int main(){
	int num,i;
	struct node *temp,*newnode;
	printf("enter no.of nodes :");
	scanf("%d",&num);
	for(i=0;i<num;i++){
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("enter a number to be stored:");
		scanf("%d",&newnode->data);
		if(i==0){
			head=newnode;
			head->previous=NULL;
		}
		else{
			newnode->previous=temp;
			temp->next=newnode;
		}
		temp=newnode;
	newnode->next=NULL;
	}
	print();
	printf("which integer you want to delete");
	scanf("%d",&num);
	del_node(num);
	print();
}

void print(){
	struct node* traverse=head;
	while(traverse!=NULL){
		printf(" | %u | %d | %u |  ",traverse->previous,traverse->data,traverse->next);
		traverse=traverse->next;
	}
}

void del_node(int value){
	int i=0;
	struct node*traverse,*temp;
	traverse=head;
	while(traverse!=NULL){
		if(traverse->data==value){
			i++;
			if(traverse->previous==NULL){
				head=head->next;
				temp=traverse;	
				head->previous=NULL;
			}
			else if(traverse->next==NULL){
				traverse->previous->next=NULL;
				temp=traverse;
			}
			else{

			temp=traverse;
			traverse->previous->next=traverse->next;
			traverse->next->previous=traverse->previous;
		}
		free(temp);
		break;
		}
		traverse=traverse->next;
	}
	if(i==0){
		printf("element not found");
	}
}

	
