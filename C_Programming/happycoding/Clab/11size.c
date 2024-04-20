#include<stdio.h>
int main()
{
	char a;
	
	short int b;
	unsigned short int c;
	int d;
	unsigned int e;
	long int f;
	unsigned long int g;
	long long int h;
	
	float i;
	double j;
	long double k;

	printf("Size of the datatypes : \n");
	
	printf("\nchar ; %d",sizeof(a));
	printf("\nshort Int ; %d",sizeof(b));
	printf("\nunsigned Short Int ; %u",sizeof(c));
	printf("\nInt ; %d",sizeof(d));
	printf("\nlong Int ; %ld",sizeof(d));
	printf("\nunsigned Int ; %u",sizeof(e));
	printf("\nunsigned long Int ; %lu",sizeof(g));
	printf("\nlong long Int ; %lld",sizeof(h));
	
	printf("\nfloat ; %d",sizeof(i));  // dont write %f and %lf and %Lf
	printf("\ndouble ; %d",sizeof(j));
	printf("\nlong double ; %d",sizeof(k));
	
	return 0;
}