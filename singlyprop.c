#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node*next;
};
struct node*top=NULL;
void PUSH(int value)
{
struct node*newnode;
newnode=(struct node*)malloc(sizeof(struct node));
if(newnode==NULL)
{
printf("stack overflow:memory not available\n");
return;
}
newnode->data=value;
newnode->next=top;
top=newnode;
printf("%d pushed into the stack \n",value);
}
void POP()
{
struct node*temp;
if(top==NULL)
{
printf("stack underflow:stack is empty\n");
return;
}
temp=top;
printf("popped element:%d\n",top->data);
top=top->next;
free(temp);
}
void linear_search(int key)
{
struct node*temp=top;
int position=1;
while(temp!=NULL)
{
if(temp->data==key)
{
printf("%d found at position %d from the top \n",key,position);
return;
}
temp=temp->next;
position++;
}
printf("%d not found in the stack \n",key);
}
void DISPLAY()
{
struct node*temp=top;
if(top==NULL)
{
printf("stack is empty\n");
return;
}
printf("stack elements(top to bottom)\t:");
while(temp!=NULL)
{
printf("%d",temp->data);
temp=temp->next;
}
printf("\n");
}
int main()
{
int choice,value;
do
{
printf("\n STACK USING SINGLY LINKED LIST\n");
printf("1.PUSH\n");
printf("2.POP\n");
printf("3.LINEAR SEARCH\n");
printf("4.DISPLAY\n");
printf("5.EXIT\n");
printf("enter your choice:\n");
scanf("%d",&choice);
switch(choice)
{
case 1:printf("enter value to push:");
       scanf("%d",&value);
       PUSH(value);
       break;
case 2:POP();
       break; 
case 3:printf("enter value to search:");
       scanf("%d",&value);
       linear_search(value);
       break; 
case 4:DISPLAY();
       break;
case 5:printf("Existing program \n");
       break; 
default:printf("inalid choice \n");
}
}
while(choice!=5);
return 0;
} 
