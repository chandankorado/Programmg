#include<stdio.h>
#define V 4
#define INF 99999
void printsolution(int dist[V][V]);
void floydwarshall(int graph[V][V])
{
	int dist[V][V],i,j,k;
	for(i=0;i<V;i++)
	{
		for(j=0;j<V;j++)
		{
			dist[i][j]=graph[i][j];
		}
	}
	for(k=0;k<V;k++)
	{
		for(i=0;i<V;i++)
		{
			for(j=0;j<V;j++)
			{
				if(dist[i][j]>dist[i][k]+dist[k][j])
				{
					dist[i][j]=dist[i][k]+dist[k][j];
				}
			}
		}
	}
	printsolution(dist);
}
void printsolution(int dist[V][V])
{   
int i,j;
	printf("The following matrix is shows the shortest  distance between all pair of vetices\n");
	for(i=0;i<V;i++)
		{
			for(j=0;j<V;j++)
			{
				if(dist[i][j]==INF)
				{
					printf("%7s","INF");
				}
				else
				{
				  printf("%7d",dist[i][j]);
			    }
			
			}
			printf("\n");
	   }
}
void main()
{      
//int V;
	//printf("enter the no of nodes V=");
	//scanf("%d",&V);
	printf("enter the weights of the graph=");
	int graph[V][V],i,j;
	for(i=0;i<V;i++)
	{
		for(j=0;j<V;j++)
		{
			scanf("%d",&graph[i][j]);
		}
		printf("\n");
	}
	floydwarshall(graph);
}
