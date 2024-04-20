#include<stdio.h>
int n,Q,Time,t,Hat,i,min,k,j,at[10],bt[10],et[10],ct[10],wt[10],tat[10];
void sort(int at[],int bt[],int et[],int n)
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

          t=bt[min];
          bt[min]=bt[i];
          bt[i]=t;

          t=et[min];
          et[min]=et[i];
          et[i]=t;
       }
    }
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
    {
        scanf("%d",&bt[i]);
        et[i] = bt[i];
    }
   printf("\nEnter Time Quantum : ");
   scanf("%d",&Q);
   sort(at,bt,et,n);
   Time = 0;
   for(i=0;i<n;i++)
   {
       if(et[i] > Q)
       {
           Time += Q;
           et[i] -= Q;
       }
       else if(et[i] <= Q)
       {
           Time += Q;
           ct[i] = Time;
       }
   }

   // maintain Queue for storing processes

   for(time=0,count=0;remain!=0;)
  {
    if(rt[count]<=time_quantum && rt[count]>0)
    {
      time+=rt[count];
      rt[count]=0;
      flag=1;
    }
    else if(rt[count]>0)
    {
      rt[count]-=time_quantum;
      time+=time_quantum;
    }
    if(rt[count]==0 && flag==1)
    {
      remain--;
      printf("P[%d]\t|\t%d\t|\t%d\n",count+1,time-at[count],time-at[count]-bt[count]);
      wait_time+=time-at[count]-bt[count];
      turnaround_time+=time-at[count];
      flag=0;
    }
    if(count==n-1)
      count=0;
    else if(at[count+1]<=time)
      count++;
    else
      count=0;
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
