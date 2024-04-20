#include<stdio.h>
#include<stdlib.h>
#define size 5

void enqueue();
void dequeue();
void display();

int front = -1, rear = -1;
int queue[size];

void main()
{
	int choice;
	while(choice != 4)
	{
		printf("\n C Queue \n\n1.Insert\n2.Delete\n3.Display\n4.Exit\n");
		printf("\nEnter the choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: enqueue();
				break;
			case 2: dequeue();
				break;
			case 3: display();
				break;
			case 4: exit(0);
				break;
			default : printf("\n !! Enter valid choice : ");
}	}	}
void enqueue()
{
	int val;
	printf("\nEnter the value : ");
	scanf("%d",&val);
	if((rear + 1)%size == front){ 	// (front == 0 && rear == size-1) || (front = rear + 1)
		printf("\n Queue is full !!");

	}
	else if(rear == -1 && front == -1){
		rear++;
		front++;
	}
	else rear = (rear + 1)%size;
	
	queue[rear] = val;
}
void dequeue()
{
	if(front == -1 && rear == -1)
		printf("\nQueue is Empty .. !!");
	else if(front == rear){
		printf("\n %d is deleted ..",queue[front]);
		front = -1;
		rear = -1;
	}
	else{
		printf("\n %d is deleted ..",queue[front]);
		front = (front + 1)%size;
	}
}
void display()
{
	int i = front;
	if(front == -1 && rear == -1)
		printf("\nQueue is Empty .. !!");
	else{
		printf("\nElements are :\n");
		while(i<=rear)
		{
			printf("%d ",queue[i]);
			i =(i+1)%size;
}	}	}