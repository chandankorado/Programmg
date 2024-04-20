#include<stdio.h>

int main()

{

int height,base,hypotenuse;
float area,circum;

printf("Enter value of height,base,hypotenuse of the triangle : ");
scanf("%d%d%d",&height,&base,&hypotenuse);



area=0.5*height*base;
circum=height+base+hypotenuse;

printf("Area of the right triangle is =%f",area);
printf("\nCircumstance of the right triangle is =%f",circum);

return 0;

}
