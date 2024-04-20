#include<stdio.h>
#define SIZE 30

int n,Atat,Awt,s,temp,t,t1,f,Hat,i,min,k,p,j,tq,Hct,Mbt;
int pid[10],at[10],bt[10],et[10],ct[10],wt[10],tat[10];

int n,mct, pid[10],at[10],bt[10],pr[10];

void sort(int at[],int bt[],int et[],int pr[],int ct[],int n)
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

          t=pid[min];
          pid[min]=pid[i];
          pid[i]=t;

          t=pr[min];
          pr[min]=pr[i];
          pr[i]=t;

          t=ct[min];
          ct[min]=ct[i];
          ct[i]=t;
       }
    }
}

void com(int j,int k,int n,int mct,int at[],int et[],int ct[],int pr[])
{                   printf("\n%d  j\n%d  k",j,k);
    while(j<n)
    {
        do
        {
            mct++;                  printf("\n%d  mct",mct);
            et[k]--;                printf("\n%d  et[%d]",et[k],k);
            if(et[k] == 0)
                ct[k] = mct;
        }while(mct < at[j]);

        //j++;                        printf("%d   J",j);
        if(j+1 <= n )
        {   // if(pr[j+1])                        printf("%d   j-1",j-1);
            if(pr[k] >= pr[j+1)
                com(j+1,k,n,mct,at,et,ct,pr);      // same prio
            else
                com(j+1,k+1,n,mct,at,et,ct,pr);   // change prio
        }
        sort(pr,bt,et,at,ct,n);
    
        for(i=0;i<n;i++)
        {
            mct += et[i];
            if(ct[i] == 0)
                ct[i] = mct;
        /*  if(ct[i] != 0)
            {
                mct = et[i];
                ct[i] = mct;
            } */
        }
    }
}

int main()
{
    int items[SIZE], front = -1, rear = -1;

    printf("Enter the no of processes : ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
        pid[i] = i;

    printf("\nEnter Arrivals Time :\n");
    for(i=0; i<n; i++)
        scanf("%d",&at[i]);

    printf("\nEnter Burts Time :\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&bt[i]);
        et[i] = bt[i];
    }
    printf("\nEnter Priorities : \n");
    for(i=0; i<n; i++)
        scanf("%d",&pr[i]);

    sort(at,bt,et,pr,ct,n);

    Hat = at[n-1];

    j=1;
    k=0;
    com(j,k,n,mct,at,et,ct,pr);

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
    printf("\nPID  AT  BT  Pr  CT  TAT  WT\n-------------------------\n");
    for(i=0;i<n;i++)
      printf("P%d  %d   %d   %d   %d   %d    %d\n",pid[i],at[i],bt[i],pr[i],ct[i],tat[i],wt[i]);
    printf("\n");
    printf("\nAvg TAT : %d",Atat);
    printf("\nAvg WT : %d\n",Awt);
    return 0;
}