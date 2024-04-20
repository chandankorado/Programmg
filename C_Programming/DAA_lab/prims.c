#include<stdio.h>
#include<stdbool.h>
#include<limits.h>
#define INF 9999999
// number of vertices in graph
#define V 5
int minkey(int key[],bool mstSET[])
{
int min=INF,min_index,v;
for(v=0;v<V;v++)
{
if(mstSET[v]==false && key[v]<min)
{
min=key[v],min_index=v;
}
return min_index;
}
}
void primMST(int graph[V][V])
{
int parent[V];
int key[V];
int count,i;
bool mstSET[V];
for( i=0;i<V;i++)
{
key[i]=INF,mstSET[i]=false;
key[0]=0;
parent[0]=-1;
for( count=0;count<V-1;count++)
{
int u,v;
u=minkey(key,mstSET);
mstSET[u]=true;
for( v=0;v<V;v++)
{
if(graph[u][v]&&mstSET[v]==false&&graph[u][v]<key[v])
{
parent[v]=u,key[v]=graph[u][v];
}
}
}
}
printMST(parent,graph);
}
int printMST(int parent[],int graph[V][V])
{
printf("Edge \t weight \n ");
int i;
for( i=1;i<V;i++)
{
printf("%d-%d \t %d \n ",parent[i],i,graph[i][parent[i]]);
}
}
int main()
{
int graph[V][V] = {
{0, 9, 75, 0, 0}, {9, 0, 95, 19, 42}, {75, 95, 0, 51, 66}, {0, 19, 51, 0, 31}, {0, 42, 66, 31, 0}};
primMST(graph);
return 0;
}
