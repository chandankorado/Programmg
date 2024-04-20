#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

struct node
{
    int value;
    struct node *next;
};

int j,i;
int main()
{
	struct node *newnode,*start,*ptr,*ptr1;
	printf("No of nodes ?--");
	scanf("%d",&j);
	
	for(i=0;i<j;i++)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		if(newnode==NULL)
		{
			printf("Unable to allocate memory .!");
			exit(0);
		}
		printf("Enter the data in %d node--",i+1);
		scanf("%d",&newnode->value);
		if(i==0)
		{
			start=newnode;
			newnode->next=NULL;
			ptr1=start;
		}
		newnode->next=NULL;
		ptr1->next=newnode;
		ptr1=ptr1->next;		
	}
	ptr1=start;
	while(ptr1 != NULL)
	{
		printf("\n the data %d adress is---%u ",ptr1->value,ptr1->next);
		ptr1 = ptr1->next;
	}
	return 0;
}