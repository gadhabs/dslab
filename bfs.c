#include<stdio.h>
#define max 20
int adj[max][max];
int visited[max];
int queue[max];

int front=-1,rear=-1;

void enqueue(int vertex)
{
if(rear==max-1)
return;
if(front==-1)
front=0;
queue[++rear]=vertex;
}

int dequeue()
{
int vertex=queue[front++];
if(front>rear)
{
front=rear=-1;
}
return vertex;
}
void bfs(int start,int n)
{
int i,current;
for(i=0;i<n;i++)
visited[i]=0;
front=rear=-1;
visited[start]=1;
enqueue(start);
printf("BFS traversal:");
while(front!=-1)
{
current=dequeue();
printf("%d",current);
for(i=0;i<n;i++)
{
if(adj[current][i]==1&&visited[i]==0)
{
visited[i]=1;
enqueue(i);
}
}
}
printf("\n");
}
int main()
{
int n,i,j,start;
printf("enter number of vertices:");
scanf("%d",&n);
if(n<=0||n>max)
{
printf("Invalid number of vertices!\n");
return 0;
}
printf("enter adjacency matrix:\n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&adj[i][j]);
}
}
printf("enter starting vertex(0 to %d):",n-1);
scanf("%d",&start);
if(start<0||start>=n);
{
printf("invalid starting vertex!\n");
}
bfs(start,n);
return 0;
}
