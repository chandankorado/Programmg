#include <stdio.h>
#include<stdlib.h>

void merge(int arr[],int start,int mid,int end)  // Merge two subarrays L and M into arr
{
  int n1 = mid - start + 1;			  // Create L ← A[start..mid] and M ← A[mid+1..end]
  int n2 = end - mid;

  int L[n1], M[n2];

  for (int i = 0; i < n1; i++)  L[i] = arr[start + i];
    
  for (int j = 0; j < n2; j++)  M[j] = arr[mid + 1 + j];
    
  int i, j, k;				// Maintain current index of sub-arrays and main array
  i = 0;
  j = 0;
  k = start;
								  // Until we reach either end of either L or M, pick larger among
  while (i < n1 && j < n2)		// elements L and M and place them in the correct position at A[start..end]
  {	
    if (L[i] <= M[j]) {
      arr[k] = L[i];
      i++;
    }
    else {
      arr[k] = M[j];
      j++;
    }
    k++;
  }
								// When we run out of elements in either L or M,
  while (i < n1) {				  // pick up the remaining elements and put in A[start..end]
    arr[k] = L[i];
    i++;
    k++;
  }

  while (j < n2) {
    arr[k] = M[j];
    j++;
    k++;
  }
}
void mergeSort(int arr[], int start, int end)
{
  if (start < end)
  {
    int m = start + (end - start) / 2;	

    mergeSort(arr, start, m);
    mergeSort(arr, m + 1, end);

    merge(arr, start, m, end);
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
	
	mergeSort(Arr, 0, n - 1);
	
	printf("\n Sorting elements of array : \n\n");
	for(int i = 0; i < n ; i++)
		printf("%d  ",Arr[i]);
	
	return 0;
}

