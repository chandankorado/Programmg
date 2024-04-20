#include<stdio.h>

int main()
{
    int i,j,k;
    i = j = k = 1;
    i = -j-- - --k;
    printf("%d",i);
    return 0;
}