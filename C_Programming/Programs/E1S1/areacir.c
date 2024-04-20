#include<stdio.h>
#include<conio.h>
#define PI 3.141

int main()
{

float r;
float area;

printf("Enter the radius of the circle : ");
scanf("%f",&r);

//area 

area =PI*r*r;

printf("Area of the given circle is : %f",area);

getch();

return 0;

}
    