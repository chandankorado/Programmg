#include<stdio.h>

int main()
{
	int a, b;
	printf("Enter the two values for arithmatic expression : ");
	scanf("%d %d",&a,&b);
	
	printf("Addition of %d and %d is : %d \n",a,b,a+b);
	printf("Subtraction of %d and %d is : %d \n",a,b,a-b);
	printf("Multiplication of %d and %d is : %d \n",a,b,a*b);
	printf("Division of %d and %d is : %d \n",a,b,a/b);
	printf("Modulus of %d and %d is : %d \n",a,b,a%b);
	//printf("Power  of %d with %d is : %d \n",a,b,a^b);
	return 0;
}