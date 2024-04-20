/*
#include<stdio.h>
#include<stdlib.h>
void insertsort(int Arr[], int n)
{
	int k,j,temp;
	
	for(k = 1; k < n; k++)
	{
		temp = Arr[k];
		j = k-1;
		
		while(j >= 0 && Arr[j]) >= temp)
		{
			Arr[j+1] = Arr[j];
			--j;
		}
		Arr[j + 1] = temp;
}	}
void displaysort(int Arr[], int n)
{
	printf("\n Sorting elements of array : \n\n");
	for(int i = 0; i < n ; i++)
		printf("%d  ",Arr[i]);
}
int main()
{
	int n,i, Arr[100];
	
	printf("\n Enter the size of array : ");
	scanf("%d",&n);
	
	printf("\n Enter the elements of array : \n");
	for(i = 0; i < n ; i++)
		scanf("%d",&Arr[i]);
	
	insertsort(Arr, n);
	printf("\n Printing the sorting values : \n");
	displaysort(Arr, n);
	
	return 0;
}
*/

#include<stdio.h>
#include<stdlib.h>

void insertionSort(int a[], int n)
{
	int i,temp,j;
	for(i = 1; i < n; i++)
	{
		temp = a[i];
		j = i - 1;
		
		while(j >= 0 && a[j] >= temp)
		{
			a[j+1] = a[j];
			--j;
		}
		a[j+1] = temp;
	}
}

void printArr(int Arr[],int n)
{
	printf("\n Sorting Elements are : \n\n");
	for(int i = 0; i < n; i++)
		printf("%d  ",Arr[i]);
	printf("\n");
}
int main()
{
	int Arr[100],n, i;
	
	printf("\n Enter the no of elements : ");
	scanf("%d",&n);
	
	printf("\n Enter the elements : \n\n");
	for(i = 0; i < n; i++)
		scanf("%d",&Arr[i]);
	insertionSort(Arr, n);
	
	printArr(Arr,n);
	
	return 0;
}