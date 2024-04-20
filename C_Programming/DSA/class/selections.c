#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10],n,i,j,t,min;
	printf("Enter size of an array");
	scanf("%d",&n);
	printf("Enter value into an array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++){
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[min]>a[j])
			min=j;
		}
		if(min!=i)
		{
			t=a[min];
			a[min]=a[i];
			a[i]=t;
		}
	}
	printf("sorted array is\n");
	for(i=0;i<n;i++)
	printf("%d\n",a[i]);
	getch();

}
