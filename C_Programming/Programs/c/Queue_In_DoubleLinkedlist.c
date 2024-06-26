#include <stdlib.h>
#include<stdio.h>
#include<conio.h>

struct Node
{
   int data;
   struct Node *next;
   struct Node *prev;
};

struct Node *front = NULL,*rear = NULL;

void EnQueue(int);
void DeQueue();
void display();
int main()
{
    int choice, value;
    printf("\n*** Queue Implementation using Linked List ***\n");
    while(1)
    {
        printf("\n****** MENU ******\n");
        printf("1. Insert in Queue\n");
        printf("2. Delete From Queue\n");
        printf("3. Display Queue\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
         case 1:
                printf("Insert the value you want to enter: ");
                scanf("%d", &value);

                EnQueue(value);
                break;
         case 2:
                DeQueue();
                break;
         case 3:
                display();
                break;
         case 4:
                exit(0);
         default:
                printf("\nInvalid Selection!!..Select valid number please!!\n");
        };
    }
   return 0;
}





void EnQueue(int value)
{
    struct Node *newNode;
    newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode -> data = value;
    newNode -> next = NULL;
    newNode -> prev = NULL;

    if(front == NULL)
        front = rear = newNode;
    else
    {
        rear -> next = newNode;
        newNode->prev= rear;
        rear = newNode;
    }
    printf("\n Data inserted in Queue!!!\n");
}





void DeQueue()
{
    if(front == NULL)
        printf("\n Queue is Empty!!!\n");
    else
    {
        struct Node *temp = front;
        front = front -> next;
        front->prev= NULL;
        printf("\n Deleted element is: %d\n", temp->data);
        free(temp);
    }
}







void display()
{
    if(front == NULL)
        printf("\n Queue is Empty!!!\n");
    else
    {
        struct Node *temp = front;
        while(temp->next != NULL)
        {
            printf("%d --> ",temp->data);
            temp = temp -> next;
        }
        printf("%d \n",temp->data);
   }
}