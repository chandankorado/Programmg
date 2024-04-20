#include<stdio.h>
int main()
{
  int i,j,at[5],bt[5];

  printf("Enter the Arrival times: \n");
  for(i=0; i<5; i++)
          scanf("%d",&at[i]);
  printf("Enter the Burst times: \n");
  for(i=0; i<5; i++)
          scanf("%d",&bt[i]);

  printf("AT  BT\n");
  printf("--------\n");

  for(i=0; i<5; i++){
    printf("%d ",at[i]);
    printf("  %d\n",bt[i]);
  }

  for (i = 0; i < 5; i++)
    {
        small = i;

        for (j = i+1; j < n; j++)
        if (at[small] > at[j])
            small = j;

    	int temp = at[small];        // Swap the minimum element with the first element
    	a[small] = a[i];
    	a[i] = temp;


  return 0;
}
