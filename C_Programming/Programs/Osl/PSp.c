#include<stdio.h>
#define SIZE 30

int n,Atat,Awt,s,temp,t,t1,f,Hat,i,min,k,p,j,tq,Hct,Mbt;
int pid[10], at[10], bt[10], ct[10], wt[10],tat[10];

int n, mct, pr[10];

void sort(int at[],int bt[],int et[],int pr[],int ct[],int n)
{
    for(i=0; i<n-1; i++)
    {
        min = i;
        for(j=i+1; j<n; j++)
        {
            if(at[min] > at[j])
                min = j;
        }
        if(min != i)
        {
            t = at[min];
            at[min] = at[i];
            at[i] = t;

            t = bt[min];
            bt[min] = bt[i];PrCn
            bt[i] = t;

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
{
    while( j<n )
    {
        do
        {
            mct++;
            et[k]--;
            if(et[k] == 0)
                ct[k] = mct;
        }while(mct < at[j]);

        if(j+1 <= n)
        {
            if(pr[k] >= pr[j+1])
                com(j+1,k,n,mct,at,et,ct,pr);
            else
                com(j+1,k+1,n,mct,at,et,ct,pr);
        }
        sort(pr,bt,et,at,ct,n);
        PrCn
        for(i=0; i<n; i++)
        {
            mct += et[i];
            if(ct[i] == 0)
                ct[i] = mct;
        }
    }
}