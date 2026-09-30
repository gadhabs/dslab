#include<stdio.h>
void main()
{
int i,j,k,n1,n2,a[50],b[50],c[50];
printf("Enter the size of the first array");
scanf("%d",&n1);
printf("Enter the elements:\n");
for(i=0;i<n1;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the size of the second array");
scanf("%d",&n2);
printf("Enter the elements:\n");
for(j=0;j<n2;j++)
{
scanf("%d",&b[i]);
}
i=0;j=0;k=0;
while(i<n1&&j<n2)
{
if(a[i]<b[j])
{
c[k]=a[i];
i++;
}
else
{
c[k]=b[j];
j++;
}
k++;
}
if(j>=n2)
{
while(i<n1)
{
c[k]=b[j];
j++;
k++;
}}
if(i>=n1)
{
while(i<n2)
{
a[k]=a[i];
i++;
k++;
}}
printf("the merged array is:\n");
for(i=0;i<n1+n2;i++)
{
printf("%d\t",c[i]);
}
return 0
}
