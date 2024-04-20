#include<stdio.h>

int main()
{
	int f1, f2, f3, i, n;
	printf("Enter the first and second fibonacci numbers  :  ");
	scanf("%d %d",&f1,&f2);
	printf("Enter the no. of fibonacci number want to print.. :  ");
	scanf("%d",&n);
	
	for(i = 1; i < n-2; i++)
	{
		f3 = f1 + f2;
		printf("%d  ",f3);
		f1 = f2;
		f2 = f3;
	}	
	return 0;
}