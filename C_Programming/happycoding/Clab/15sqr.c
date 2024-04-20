#include<stdio.h>
#include<math.h>
int main()
{
	int num, Intvar;
	float Floatvar;
	
	printf("Enter the number to check perfect square or not : \n");
	scanf("%d",&num);
	
	Floatvar = sqrt((double)num);  // compile :gcc 15sqr.c -o 15sqr -lm
	Intvar = Floatvar;
	
	if(Intvar == Floatvar)
		printf("\n%d is a perfect square !",num);
	else
		printf("\n%d is not a perfect square !",num);
	return 0;
}