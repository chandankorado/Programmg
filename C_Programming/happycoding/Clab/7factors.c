// factors of a given number?

#include<stdio.h>

int main()
{
	int num, rem, i, count=0;
	
	printf("Enter any number: ");
	scanf("%d", &num);
	
	for(i=1; i<num; i++)
	{
		if(num%i==0)
		count++;
	}
	
	printf("\nThere are %d factors of %d:\n", count, num);
	
	count=1;
	for(i=1; i<num; i++)
	{
		if(num%i==0)
		{
			printf("[%d] -> %d\n", count, i);
			count++;
		}
	}
	//getc();
	return 0;
}
