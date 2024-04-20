#include<stdio.h>

int main()
{
int a,b;
int diff,sum;

printf("Enter the first number : ");
scanf("%d",&a);
printf("Enter the second number : ");
scanf("%d",&b);

diff=abs(a-b);

// check condition to identify which is large number.

// if( a>b )
// diff=a-b;
// else
// diff=b-a;

printf("Differnce between %d and %d is = %d",a,b,diff);

sum=a+b;

printf("\nSum of the two number is : %d",sum);

return 0;

}

