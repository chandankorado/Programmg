#include<stdio.h>
//#include<conio.h>

int main()
{

float celc,fahrn;

printf("Enter the temperature in degree celicious : ");
scanf("%f",&celc);

//calc temp in fahrenheit
fahrn=(celc*(1.8))+32;

printf("the temperature in fahrenheit is  : %f",fahrn," F");

return 0;

}
