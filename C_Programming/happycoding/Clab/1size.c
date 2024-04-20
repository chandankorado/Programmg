//Write a program to print the memory allocation required for all thedatatype in C Language?

#include<stdio.h>
int main()
{
	int a;
	char b;
	float c;
	double d;
	long double e;
	unsigned char f;
	short int g;
	unsigned int h;
	unsigned long int i;
	
	printf("size of integer datatype:%d bytes\n",sizeof(a));
	printf("size of char datatype:%d bytes\n",sizeof(b));
	printf("size of float datatype:%d bytes\n",sizeof(c));
	printf("size of double datatype:%d bytes\n",sizeof(d));
	printf("size of long double:%d 	bytes\n",sizeof(e));
	printf("size of unsigned char:%d bytes\n",sizeof(f));
	printf("size of short in:%d bytes\n",sizeof(g));
	printf("size of unsigned int:%d bytes\n",sizeof(h));
	printf("size of unsigned long int:%d bytes\n",sizeof(i));
}