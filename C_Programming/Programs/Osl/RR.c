#include<stdio.h>
#include<stdlib.h>
#define SIZE 30

int n,Atat,Awt,s,temp,t,t1,f,Hat,i,min,k,p,j,tq,Hct,Mbt;
int pid[10],at[10],bt[10],et[10],ct[10],wt[10],tat[10];
int items[SIZE], front = -1, rear = -1;

void enQueue(int value){
    if (front == -1)
      front = 0;
    rear++;
    items[rear] = value;
}

int deQueue() {
  if (front == -1)
    return -1;
  else {
      p = items[front];
      front++;
      if (front > rear)
        front = rear = -1;
      return p;
  }
  //return p;
}
void display() {
  if (rear == -1)
    printf("\nQueue is Empty!!!");
  else {
    int i;
    printf("\nQueue elements are:\n");
    for (i = front; i <= rear; i++)
      printf("%d  ", items[i]);
  }
}
int check(){
  if (front == -1){
      printf("\n front check excuted\n");
      return -1;
  }
  else
  {
      p = items[front];
      printf("\n Check element p: %d \n",p);
      return p;
  }
}
//  comTime(k,i,tq,Hct,ct,et);
void comTime(int k,int i, int tq,int Hct, int ct[],int et[]){
        if(et[i] <= tq)
        {
            t=k;                         printf("\n%d is et[%d]",et[i],i);
            Hct += tq;                   printf("\n%d is Hct",Hct);
            ct[i] = Hct;                  printf("\n%d is ct[%d]",ct[i],i);
            display();
            t1 = check();                   printf("\n%d is t1",t1);


            if(t1 != 0 && Hct <= Mbt)     // if(check())  --> segmentation fault
                f = deQueue();               printf("\n%d is f",f);
            t1 = check();
            if(t1 && (Hct != Mbt)){
                s = deQueue();           printf("\n%d is temp",temp);
                comTime(t,s,tq,Hct,ct,et);
            }
        }
        else
        {
            et[i] -= tq;                     printf("\n%d is Et[%d]",et[i],i);
            Hct += tq;

                                            printf("\n%d is HCT",Hct);
            display();
            t1 = check();                    printf("\n%d is T1",t);
            if(check() != 0 && front != -1)
                f = deQueue();                printf("\n%d is F",f);
                                                printf("\nat[%d] : %d ",k,at[k]);
                                                printf("\n%d is Hct",Hct);
            for(k = k+1; at[k] <= Hct; k++)
                enQueue(k);
            display();
            t = k-1;                          printf("\n%d is T,K",t); // ?
            enQueue(i);                       printf("\n%d is I",i);
            s = check();                     printf("\n%d is s\n\n",s);
                                            printf("\n %d  %d\n ",t,s);
            comTime(t,s,tq,Hct,ct,et);
        }
   }

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

          t=pid[min];
          pid[min]=pid[i];
          pid[i]=t;
       }
    }
}

int main()
{
    int items[SIZE], front = -1, rear = -1;


    printf("Enter no of processes ; ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
      pid[i] = i;

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
    scanf("%d",&tq);

   sort(at,bt,et,n);
    Hat = 0;
    for(i=0;i<=n;i++)
    {
        if(Hat < at[i])
            Hat = at[i];
    }
    for(i=0;i<=n;i++)
        Mbt += bt[i];

    printf("Highest Arrival time : %d\n",Hat);
    printf("Highest completion time : %d\n",Mbt);

   i=k=0;
   Hct = 0;

   comTime(k,i,tq,Hct,ct,et);

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
    printf("\nPID  AT  BT  CT  TAT  WT\n-------------------------\n");
    for(i=0;i<n;i++)
      printf("P%d  %d   %d   %d   %d    %d\n",pid[i],at[i],bt[i],ct[i],tat[i],wt[i]);
    printf("\n");
    printf("\nAvg TAT : %d",Atat);
    printf("\nAvg WT : %d",Awt);
    return 0;
}
