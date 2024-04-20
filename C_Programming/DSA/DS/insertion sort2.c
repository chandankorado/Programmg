#include<stdio.h>
#include<conio.h>
int main()
{

	int n,i,j,t,a[11];
	printf("Enter the size of an array:");
	scanf("%d",&n);
	printf("Enter array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	
	}
	for(i=1;i<n;i++)
	{
		t=a[i];
		for(j=i-1;((j>=0)&&(t<a[j]));j--)
		{
			a[j+1]=a[j];
		}
		    a[j+1]=t;

    } 
	printf("after sorting elements are \n");
	   for(i=0;i<n;i++)
	   {
	   
	    printf("%d\n",a[i]);
	}
	    getch();
	
}

