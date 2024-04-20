#include<stdio.h>

int main()
{

float total,EM,PCTC,BEEE,IT,ENGLISH;
float percnt,avg;

printf("Enter marks of EM,PCTC,BEEE,IT,ENGLISH  : ");
scanf("%f%f%f%f%f",&EM,&PCTC,&BEEE,&IT,&ENGLISH);

total=(EM+PCTC+BEEE+IT+ENGLISH);

avg=(total/500);

percnt=(avg*100);

printf("Total marks is : %f ",total);
printf("Overal Percentage is : %f ",percnt);

return 0;

}
