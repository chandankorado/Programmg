// pgm will be excuted without error

#include<stdio.h>
void fun(){}     // if fun(void) then error
int main(void)
{
    fun(10, "QG", "hi");   // cause argmnt taken
  //  printf("%d",sizeof());
    return 0;
}