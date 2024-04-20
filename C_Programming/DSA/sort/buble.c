#include<stdio.h>    
void bubbleSort(int a[], int n)
{  
   int i, j, temp;
   for(i = 0; i < n; i++)    
   {
      for(j = i+1; j < n; j++)    
      {    
          if(a[j] < a[i])    
          {    
                temp = a[i];    
                a[i] = a[j];    
                a[j] = temp;     
          }     
      }     
   }     
}  

int main()
{
	int n,i, Arr[100];
	
	printf("\n Enter the size of array : ");
	scanf("%d",&n);
	
	printf("\n Enter the elements of array : \n");
	for(i = 0; i < n ; i++)
		scanf("%d",&Arr[i]);
	
	bubbleSort(Arr,n);
	
	printf("\n Sorting elements of array : \n\n");
	for(int i = 0; i < n ; i++)
		printf("%d  ",Arr[i]);
	
	return 0;
}