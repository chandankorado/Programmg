#include<stdio.h>

int main()
{
	int a;
	printf("Enter the number to check whether Odd or Even : ");
	scanf("%d",&a);
	
	if(a == 0)
		printf("\n%d is neither Odd nor Even number !\n",a);
	else if(a % 2 == 0 )
		printf("\n%d is Even Number !\n",a);
	else
		printf("\n%d is Odd Number !",a);
	return 0;
}