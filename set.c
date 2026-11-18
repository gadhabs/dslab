#include<stdio.h>
#define MAX 20
int parent[MAX];
int rank[MAX];
void create(int n)
{
int i;
for(i=0;i<n;i++)
{
parent[i]=i;
rank[i]=0;
}
printf("disjoint sets created successfully \n");
}
int find(int x)
{
if(parent[x]!=x)
parent[x]=find(parent[x]);
return parent[x];
}
void Union(int x,int y)
{
int rootX=find(x);
int rootY=find(y);
if(rootX==rootY)
{
printf("both elements belong to the same set\n");
return;
}
if(rank[rootX]<rank[rootY])
{
parent[rootX]=rootY;
}
else if(rank[rootX]>rank[rootY])
{
parent[rootY]=rootX;
}
else
{
parent[rootY]=rootX;
rank[rootX]++;
}
printf("union operation completed successfully \n");
}
void display(int n)
{
int i;
printf("\nelement\tparent\trepresentative\n");
for(i=0;i<n;i++)
{
printf("%d\t%d\t%d\n",i,parent[i],find(i));
}
}
int main()
{
int n,choice,x,y;
printf("enter number of elements:");
scanf("%d",&n);
if(n<=0||n>MAX)
{
printf("invalid number of elements!\n");
return 0;
}
do
{
printf("DISJOINT SET ADT\n");
printf("1.CREATE\n");
printf("2.UNION\n");
printf("3.FIND\n");
printf("4.DISPLAY\n");
printf("5.EXIT\n");

printf("enter yout choice");
scanf("%d",&choice);
switch(choice)
{
case 1:
create(n);
break;
case 2:
printf("enter two elements:");
scanf("%d%d",&x,&y);
if(x>=0&&x<n&&y>=0&&y<n)
Union(x,y);
else
printf("invalid elements!\n");
break;
case 3:
printf("enter elements to find:");
scanf("%d",&x);
if(x>=0&&x<n)
printf("representative of %d is %d\n",x,find(x));
else
printf("invalid element!\n");
break;
case 4:
display(n);
break;
case 5:
printf("exiting program\n");
break;
default:
printf("invalid choice!\n");
}
}
while(choice!=5);
return 0;
}
