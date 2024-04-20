#include<stdio.h>

int main()
{

char c;

printf("Enter a character : ");
scanf("%c",&c);

// %d displays the integer value of a character
// %c displays the actual character

printf("The ASCII value of the  character is : %c = %d",c,c);
return 0;

}
