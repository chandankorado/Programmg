#include<stdio.h>

int main()       // if main(void).. > error
{
    static int i = 5;
    if( --i )
    {
        printf("%d\n",i);  // O/P. 4321
        main(10);  // main() will be called still --i
    }             // cause main(argument)
    return 0;
}