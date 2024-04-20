// shorthand assignment operator

#include<stdio.h>

int main()
{
    int a1,a2,a3,a4,a5,a6,a7,a8,a9,a0;
    a1=a2=a3=a4=a5=a6=a7=a8=a9=a0=7;
    a1+=1;   // add then assign (a1 = a1 + 1) 
    a2-=1;   //
    a3*=1;
    a4/=1;
    a5%=1;
    a6<<=1;
    a7>>=1;
    a8&=1;
    a9|=1;
    a0^=1;   // xor
    printf("Short hand assignment operator.\n\na1=a2=a3=a4=a5=a6=a7=a8=a9=a0=7\n");
    printf("\na1+=1 = %d\na2-=1 = %d\na3*=1 = %d\na4/=1 = %d\na5%=1 = %d",a1,a2,a3,a4,a5);
    printf("\na6<<=1 = %d\na7>>=1 = %d\na8&=1 = %d\na9|=1 = %d\na0^=1 = %d\n",a6,a7,a8,a9,a0);
   return 0;
}