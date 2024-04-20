#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,n;
	printf("Enter the number of intigers ; ");
	scanf("%d",&n);
	
	int *ptr = (int *)malloc(n*sizeof(int));
	
	if(ptr==NULL)
	{
		printf("Memory not available .!");
		exit(1);
	}
	
	for(i=0;i<n;i++)
	{
		printf("Enter the intiger : ");
		scanf("%d",ptr+i);
	}
	printf("Intigers are  : ");
	for(i=0;i<n;i++)
	{
		printf("%d ",*(ptr+i));
	}
	return 0;
}