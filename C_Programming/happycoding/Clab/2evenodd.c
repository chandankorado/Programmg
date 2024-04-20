//Write a program to check whether the given number is even number or odd number?

#include <stdio.h>
int main()
{
	int num;
	
	printf("Enter an integer: ");
	scanf("%d", &num);
	
	if(num % 2 == 0)
		printf("%d is even.", num);
	else
		printf("%d is odd.", num);
	return 0;
}