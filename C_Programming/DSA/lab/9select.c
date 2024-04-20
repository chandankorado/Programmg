#include <stdio.h>  

void selectionSort(int a[], int n)  
{  
	int i, j, small;  
      
    for (i = 0; i < n-1; i++)     // One by one move boundary of unsorted subarray
    {  
        small = i;                 //minimum element in unsorted array
          
        for (j = i+1; j < n; j++)  
        if (a[small] > a[j])  
            small = j;  

    	int temp = a[small];        // Swap the minimum element with the first element
    	a[small] = a[i];  
    	a[i] = temp;  
    }  
}  

void printArr(int a[], int n)       // function to print the array
{  
    int i;  
    for (i = 0; i < n; i++)  
        printf("%d ", a[i]);  
}  
  
int main()  
{  
    int n,i, Arr[100];
	
	printf("\n Enter the size of array : ");
	scanf("%d",&n);
	
	printf("\n Enter the elements of array : \n");
	for(i = 0; i < n ; i++)
		scanf("%d",&Arr[i]); 
    
    selectionSort(Arr, n);  
    printf("\nAfter sorting array elements are - \n");    
    printArr(Arr, n);  
    return 0;  
}
