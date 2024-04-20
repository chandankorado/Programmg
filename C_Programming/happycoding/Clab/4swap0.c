// With variable:

#include <stdio.h>

int main()
{
	int a,b,temp;
	
	printf("enter the value of a: ");
	scanf("%d",&a);
	printf("\nenter the value of b: ");
	scanf("%d",&b);
	
	temp=a;
	a=b;
	b=temp;
	
	printf("\n values of a and b are now swapped..");
	printf("\n value of 'a' is: %d",a);
	printf("\n value of 'b' is: %d",b);
	
	return 0;
}
