#include<stdio.h>

int main()
{
	int i, a, b, p, choice;
	printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Modulus\n6.Power\n\n Enter the choice : ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			printf("Enter the two values for arithmatic expression : \n");
			scanf("%d %d",&a,&b);
			printf("Addition of %d and %d is : %d \n",a,b,a+b);break;
		case 2:
			printf("Enter the two values for arithmatic expression : \n");
			scanf("%d %d",&a,&b);
			printf("Subtraction of %d and %d is : %d \n",a,b,a-b);break;
		case 3:
			printf("Enter the two values for arithmatic expression : \n");
			scanf("%d %d",&a,&b);
			printf("Multiplication of %d and %d is : %d \n",a,b,a*b);break;
		case 4:
			
			printf("Enter the two values for arithmatic expression : \n");
			scanf("%d %d",&a,&b);
			printf("Division of %d and %d is : %d \n",a,b,a/b);break;
		case 5:
			printf("Enter the two values for arithmatic expression : \n");
			scanf("%d %d",&a,&b);
			printf("Modulus of %d and %d is : %d \n",a,b,a%b);break;
		case 6:
			printf("Enter the two values for arithmatic expression : \n");
			scanf("%d %d",&a,&b);
			p = 1;
			for(i = 1; i <= b; i++)
				p = p * a;
			printf("Power  of %d with %d is : %d \n",a,b,p);break;
		default : 
			printf("INVALID Choice !!\n");break;
	}
	return 0;
}
