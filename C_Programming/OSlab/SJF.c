#include<stdio.h>
int n,Atat,Awt,temp,t,t1,Hat,i,min,k,j,at[10],bt[10],ct[10],wt[10],tat[10];
void sort(int at[],int bt[],int n)
{
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
}
 void comTime(int i,int at[],int ct[],int bt[])
{
    i++;

    for(i=1;i<=ct[i-1];i++)
    {
        if(at[i])                     // n=4, if( at[5] ) wil giv segmentation fault
        {
            if(at[i]<=ct[i-1] )
                ct[i] = ct[i-1]+bt[i];
            else                            // at[i] > ct[i-0]
                ct[i] = at[i]+bt[i];
            temp = i;
        }
    }
    if(at[temp] != Hat && ct[temp] < Hat)         //  if(ct[temp] < Hat)
        comTime(temp,at,ct,bt);
}

int main()
{
    printf("Enter no of processes ; ");
    scanf("%d",&n);
    
    printf("\nEnter Arrival times ; \n");
    for(i=0;i<n;i++)
      scanf("%d",&at[i]);
    
    printf("\nEnter Burst  times ; \n");
    for(i=0;i<n;i++)
      scanf("%d",&bt[i]);

   sort(at,bt,n);
    Hat = 0;
    for(i=0;i<=n;i++)
    {
        if(Hat < at[i])
            Hat = at[i];
    }
    printf("Highest Arrival time : %d\n",Hat);
   i=0;
   ct[i]=at[i]+bt[i];
   comTime(i,at,ct,bt);

   
   for(i=0;i<n;i++)
   {
       tat[i]=ct[i]-at[i];
       wt[i]=tat[i]-bt[i];
   }
   Atat=0;
   Awt=0;
   for(i=0;i<n;i++)
   {
       Atat += tat[i];
       Awt += wt[i];
   }
   Atat = Atat/n;
   Awt = Awt/n;
    printf("\nAT  BT  CT  TAT  WT\n-------------------\n");
    for(i=0;i<n;i++)
      printf("%d   %d   %d   %d    %d\n",at[i],bt[i],ct[i],tat[i],wt[i]);
    printf("\n");
    printf("\nAvg TAT : %d",Atat);
    printf("\nAvg WT : %d\n",Awt);
    return 0;
}
