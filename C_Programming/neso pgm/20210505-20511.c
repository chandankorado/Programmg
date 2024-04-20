#include<stdio.h>

int main()
{
    int m=10, *n;
    n=&m;
    printf("%d",n);
    *n=20;
    printf("\nnow add is %d",&m);
    printf("\n%d",m);
    return 0;
}