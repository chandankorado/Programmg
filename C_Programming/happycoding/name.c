#include<stdio.h>
 
int main()
{
	char name[30];
	int i;
	
	printf("Enter your name : ");
	scanf("%s",&name);
	
	printf("\n\n OK %s  \n",name);
	for(i = 0; i <= 5; i++)
		printf("You Love Programming !!\n");
	
	return 0;
}