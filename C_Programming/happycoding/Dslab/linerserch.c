#include<stdio.h>
#include<stdlib.h>
#define size 20
int main()
{
	int arr[size], i, n, num, found = 0, pos = -1;
	
	printf("Enter the no. of elements wants to enter into the array : ");
	scanf("%d",&n);
	
	printf("Enter the elements  into  array : ");
	for(i = 1; i <= n; i++)
		scanf("%d",&arr[i]);
	printf("Enter the elements want to search  in the array : ");
	scanf("%d",&num);
	
	for(i = 0; i , n; i++)
	{	if(num == arr[i])
			{
				found++;
				pos = i;
			}
		else if(found == 0)
			printf("\n%d is not found in the list ...\n);
	}
	printf("\n%d is found %d times in %d index ...",num,found,pos);
		
}