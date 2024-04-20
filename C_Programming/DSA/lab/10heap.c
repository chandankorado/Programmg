/* #include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
  
void heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
  
    if (left < n && arr[left] > arr[largest])
        largest = left;
  
    if (right < n && arr[right] > arr[largest])
        largest = right;
  
    if (largest != i)
    {
       swap(&arr[i], &arr[largest]);
       heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n)
{
    for (int i = (n/2)-1; i >= 0; i--)
      heapify(arr, n, i);
      
    for (int i = n-1; i >= 0; i--)
    {
      swap(&arr[0], &arr[i]);  
      heapify(arr, i, 0);
    }
}

void printArray(int arr[], int n)
{
   for (int i = 0; i < n; ++i)
     printf("%d ", arr[i]);
   printf("\n");
}

int main()
{
   int n,i, arr[100];
	
	printf("\n Enter the size of array : ");
	scanf("%d",&n);
	
	printf("\n Enter the elements of array : \n");
	for(i = 0; i < n ; i++)
		scanf("%d",&arr[i]); 
		
    heapSort(arr, n);
  
    printf("Sorted array is \n");    printArray(arr, n);
}

*/


#include<stdio.h>
int temp;
void heapify(int arr[], int size, int i)
{
	int largest = i;
	int left = 2*i + 1;
	int right = 2*i + 2;
	
	if (left < size && arr[left] >arr[largest])
		largest = left;
		
	if (right < size && arr[right] > arr[largest])
		largest = right;
		
	if (largest != i)
	{
		temp = arr[i];
		arr[i]= arr[largest];
		arr[largest] = temp;
		heapify(arr, size, largest);
	}
}
void heapSort(int arr[], int size)
{
	int i;
	for (i = size / 2 - 1; i >= 0; i--)
		heapify(arr, size, i);
		
	for (i=size-1; i>=0; i--)
	{
		temp = arr[0];
		arr[0]= arr[i];
		arr[i] = temp;
		heapify(arr, i, 0);
	}
}
void main()
{
	int size,i, arr[100];
	
	printf("\n Enter the size of array : ");
	scanf("%d",&size);
	
	printf("\n Enter the elements of array : \n");
	for(i = 0; i < size ; i++)
		scanf("%d",&arr[i]); 
		
	heapSort(arr, size);
	
	printf("printing sorted elements\n");
	for (i=0; i<size; ++i)
	printf("%d\n",arr[i]);
}