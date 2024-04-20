#include<stdio.h>

int main()
{
    int num=50, *p;
    p=&num;
    printf("add of variable p is %p\n",p);
    printf("value of p variable is %p\n",*p);
    return 0;

}