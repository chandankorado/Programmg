#include<limits.h>
#include<stdio.h>
#include<stdbool.h>
#define V 4
int mindistance(int dist[V],bool sptset[V])
{
	int min=INT_MAX,min_index,v;
	for(v=0;v<V;v++)
	{
		if(sptset[v]==false&&dist[v]<=min)
		{
			min=dist[v],min_index=v;
		}
	}
	return min_index;
}
void printsolution(int dist[V])

{
	int i;
	printf("vertex\t\t distance from source\n");
	for(i=0;i<V;i++)
	{
		printf("%d\t\t%d\n",i,dist[i]);
	}
}
void dijkstra(int graph[V][V],int src)
{
	int dist[V],i;
	bool sptset[V];
	for( i=0;i<V;i++)
	{
		dist[i]=INT_MAX,sptset[i]=false;
	}
	dist[src]=0;
	int count,u,v;
	for(count=0;count<V-1;count++)
	{
		u=mindistance(dist,sptset);
		sptset[u]=true;
		for(v=0;v<V;v++)
		{
		  if(!sptset[v]&&graph[u][v]&&dist[u]!=INT_MAX&&dist[u]+graph[u][v]<dist[v])
		  {
		     dist[v]=dist[u]+graph[u][v];
		 	
		  }
	    }
		
	}
	printsolution(dist);
}
void main()
{
	int graph[V][V];
	int i,j;
	printf("enter the weights of the graph=\n");
	for(i=0;i<V;i++)
	{
		for(j=0;j<V;j++)
		{
			
			scanf("%d",&graph[i][j]);
		}
		printf("\n");
	}
	dijkstra(graph,0);
}

