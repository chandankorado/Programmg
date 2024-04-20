#include<stdio.h>
int arr[10];
int del=-1,rear=-1;
int Enqueue(int k){
	if(rear==-1){
		rear=0;
		del=0;
		arr[rear]=k;
	}
	else if(rear==9){
		printf("Overflow");
	}
	else{
		rear++;
		arr[rear]=k;
	}
}
int Dequeue(void){
	int i;
	if(rear==-1){
		printf("underflow");
	}
	else{
	int min=arr[0];
	int min_pos;
	for(i=0;i<=rear;i++){
		if(arr[i]<min){
			min_pos=i;
			min=arr[i];
		}	
	}
	printf("\n%d ",min);
	for(i=min_pos;i<rear;i++){
		if(i!=rear){
		arr[i]=arr[i+1];
	}
	}
	rear--;
   }
}
int main(){
	int i=1,n;
	while(i){
		printf("\nEnter your option \n1.enqueue\n2.dequeue \n Enter 0 to exit:");
		scanf("%d",&i);
		if(i==1){
			printf("\nEnter data to be stored:");
			scanf("%d",&n);
			Enqueue(n);
		}
		else if(i==2){
			Dequeue();
		}
	}
	printf("\nList elements remaining in the Q\n");
	for(i=0;i<=rear;i++){
		printf("  %d   ",arr[i]);
	}
}

