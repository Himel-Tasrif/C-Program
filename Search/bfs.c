#include<stdio.h>

void BFS(int);
int graph[10][10], visited[10],total;

main()
{
	int i,j;
	printf("\nEnter the total number of vertices in graph\n");
	scanf("%d",&total);
	/*Adjacency matrix input*/
	printf("\nEnter the adjacency matrix\n");
	for(i=0;i<total;i++)
	{
		for(j=0;j<total;j++)
		{
			scanf("%d",&graph[i][j]);
		}
	}
	for(i=0;i<total;i++)
	{
		visited[i] = 0;
	}
	printf("\nBFS traversal is \n");
	BFS(0);
}
void BFS(int vertex)
{
	int j;
	printf("%d\t",vertex);
	visited[vertex] = 1;
	for(j=0;j<total;j++)
	{
		if(!visited[j] && graph[vertex][j] == 1 )
		{
			BFS(j);
		}
	}
}
