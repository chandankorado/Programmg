#include<stdio.h>

int main()
{
    int n,t,t1,i,min,j,at[10],bt[10],ct[10],wt[10],tat[10];
    
    printf("Enter no of processes ; ");
    scanf("%d",&n);
    
    printf("\nEnter Arrival times ; \n");
    for(i=0;i<n;i++)
      scanf("%d",&at[i]);
    
    printf("\nEnter Burst  times ; \n");
    for(i=0;i<n;i++)
      scanf("%d",&bt[i]);
    
    for(i=0;i<n-1;i++)
    { 
       min=i;
		    for(j=i+1;j<n;j++)
		    {
			      if(at[min]>at[j])
			         min=j;
		    }
		    if(min!=i)
		    {
		      	t=at[min];
			     at[min]=at[i];
			     at[i]=t;
         
         t1=bt[min];
			     bt[min]=bt[i];
			     bt[i]=t1;
	    	}
	  }

   ct[0]=bt[0];
   for(i=1;i<n;i++)
   {
      if(at[i]<=ct[i-1])
         ct[i] = ct[i-1]+bt[i];
      else
         ct[i] = at[i]+bt[i];
   }
   for(i=0;i<n;i++)
   {
       tat[i]=ct[i]-at[i];
       wt[i]=tat[i]-bt[i];
   }
    printf("\nAT  BT  CT  TAT  WT\n-------------------\n");
    for(i=0;i<n;i++)
      printf("%d   %d   %d   %d    %d\n",at[i],bt[i],ct[i],tat[i],wt[i]);
    
    return 0;
}