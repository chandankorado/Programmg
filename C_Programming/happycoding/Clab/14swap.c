#include<stdio.h>

int main()
{
	int a, b, temp;
	printf("Enter two value of a and b : \n");
	scanf("%d %d",&a,&b);
	printf("Before swaping a = %d and b = %d \n",a,b);
	temp = a;
	a = b;
	b = temp;
	printf("After swaping a = %d and b = %d \n",a,b);
	return 0;
}