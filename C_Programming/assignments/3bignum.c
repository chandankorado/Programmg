#include <stdio.h>

int main()
{
   int num1, num2, num3;
   int *p1, *p2, *p3;
//taking input from user
   printf("Enter three numbers: \n");
   scanf("%d%d%d",&num1,&num2,&num3);
//assigning the address of input numbers to pointers
   p1 = &num1;
   p2 = &num2;
   p3 = &num3;
   if(*p1 > *p2)
   {
        if(*p1 > *p3)
        { 		
            printf("\n%d is the largest number .\n", *p1); 
        }
        else
        { 		
            printf("\n%d is the largest number .\n", *p3);
        }
   }
   else
   { 	
        if(*p2 > *p3)
        { 		
            printf("\n%d is the largest number .\n",*p2);
        }
        else
        { 		
            printf("\n%d is the largest number .\n", *p3);
        }
   }
   return 0;
}