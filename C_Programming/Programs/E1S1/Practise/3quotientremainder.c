/* finding Quotients and Reminder */

#include<stdio.h>

int main()
{

int dividend,divider,quotient,reminder;

printf("Enter the dividend,divider : ");
scanf("%d%d",&dividend,&divider);

// compute quotient
quotient = dividend / divider;

// compute reminder
reminder = dividend % divider;

printf("Quotient of %d and %d is = %d",dividend,divider,quotient);
printf("\nReminder of %d and %d is = %d",dividend,divider,reminder);

return 0;
}
