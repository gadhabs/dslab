#include<stdio.h>
#define max 20
int adj[max][max];
int visited[max];
int n;

void dfs(int vertex)
{
int i;
printf("%d",vertex);
visited[vertex]=1;
for(i=0;i<n;i++)
{
if(adj[vertex][i]==1&&visited[i]==0)
{
dfs(i);
}
}
}
          
int main()
{
int i,j,start;
printf("enter number of vertices:");
scanf("%d",&n);

printf("enter adjacency matrix:\n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&adj[i][j]);
}
}
for(i=0;i<n;i++)
{
visited[0];
}
printf("enter starting vertex(0 to %d):",n-1);
scanf("%d",&start);
printf("DFS Traversal:");
dfs(start);

for(i=0;i<n;i++)
{
if(visited[i]==0)
{
dfs(i);
}
}

return 0;
}
