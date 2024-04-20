#include<stdio.h>

int main()
{

int km;
float m,ft,inch,cm;

printf("Enter distance between two cities in km : ");
scanf("%d",&km);

m=km*1000;ft=km*3280.48;inch=km*39370.1;cm=km*100000;
printf("distance is = %f meter";"%f feet","%f inches","%f centimeter",m,ft,inch,cm);

return 0; 

}
