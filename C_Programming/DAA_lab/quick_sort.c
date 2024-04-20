#include<stdio.h>
void quicksort(int number[25],int first,int last){
int i, j, pivot, temp;
if(first<last){
pivot=first;
i=first;
j=last;
while(i<j){
while(number[i]<=number[pivot]&&i<last)
i++;
while(number[j]>number[pivot])
j--;
if(i<j){
temp=number[i];
number[i]=number[j];
number[j]=temp;
}
}
temp=number[pivot];
number[pivot]=number[j];
number[j]=temp;
quicksort(number,first,j-1);
quicksort(number,j+1,last);
}
}
int main(){
int i, count, number[25];
printf("Enter some elements (Max. - 25): ");
scanf("%d",&count);
printf("Enter %d elements: ", count);
for(i=0;i<count;i++)
scanf("%d",&number[i]);
quicksort(number,0,count-1);
printf("The Sorted Order is: ");
for(i=0;i<count;i++)
printf(" %d",number[i]);
return 0;
}
/* merge sort
#include<stdio.h>
void mergesort(int a[],int first,int mid,int last)
{
	int temp[200],index,i,j;
	i=first;
	j=mid+1;
	index=first;
	while(i<=mid&&j<=last)
	{
		if(a[i]<a[j])
		{
			temp[index]=a[i];
			i++;
			index++;
		}
		else
		{
			temp[index]=a[j];
			j++;
			index++;
		}
	}
	if(i>mid)
	{
		while(j<=last)
		{
			temp[index]=a[j];
			j++;
			index++;
		}
	}
	else
	{
		while(i<=mid)
		{
			temp[index]=a[i];
			i++;
			index++;
		}
	}
	for(i=0;i<index;i++)
	{
		a[i]=temp[i];
	}
}
void mergesort_divide(int a[],int first,int last)
{
	int mid;
	if(first<last)
	{
		mid=(first+last)/2;
		mergesort_divide(a,first,mid);
		mergesort_divide(a,mid+1,last);
		mergesort(a,first,mid,last);
	}
}
int main()
{
	int a[100],i,n;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	printf("Enter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	mergesort_divide(a,0,n-1);
	printf("\nSorted elements:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
heap sort
#include<stdio.h>
void mergesort(int a[],int first,int mid,int last)
{
	int temp[200],index,i,j;
	i=first;
	j=mid+1;
	index=first;
	while(i<=mid&&j<=last)
	{
		if(a[i]<a[j])
		{
			temp[index]=a[i];
			i++;
			index++;
		}
		else
		{
			temp[index]=a[j];
			j++;
			index++;
		}
	}
	if(i>mid)
	{
		while(j<=last)
		{
			temp[index]=a[j];
			j++;
			index++;
		}
	}
	else
	{
		while(i<=mid)
		{
			temp[index]=a[i];
			i++;
			index++;
		}
	}
	for(i=0;i<index;i++)
	{
		a[i]=temp[i];
	}
}
void mergesort_divide(int a[],int first,int last)
{
	int mid;
	if(first<last)
	{
		mid=(first+last)/2;
		mergesort_divide(a,first,mid);
		mergesort_divide(a,mid+1,last);
		mergesort(a,first,mid,last);
	}
}
int main()
{
	int a[100],i,n;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	printf("Enter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	mergesort_divide(a,0,n-1);
	printf("\nSorted elements:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}

*/





