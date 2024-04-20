if( ct[0] >= Hat )
{
  sort from at[1 to n-1]
  then do fcfs
}
else



  /* for(i=1;i<n;i++)
   {
      if(at[i]>=ct[i-1])
          ct[i]=at[i]+bt[i];
      else
      {
       min=i;
       k=i;
       for(j=i+1;j<=ct[i-1];j++)
        {
            if(bt[min]>bt[j])
                min=j;
        }
        if(min!=i)
        {
            t=bt[min];
            bt[min]=bt[i];
            bt[i]=t;

            t1=at[min];
            at[min]=at[i];
            at[i]=t1;
        }
      for(j=k;j<=ct[k-1];j++)
         ct[j] = ct[j-1]+bt[j];
     }
   } */
