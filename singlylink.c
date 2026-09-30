#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *top = NULL;

void push(int value)
{
    struct node *newnode;
 
    newnode = (struct node *)malloc(sizeof(struct node));

    newnode->data = value;
    newnode->next = top;
    top = newnode;
}

void display()
{
    struct node *temp = top;

    if (top == NULL)
    {
        printf("Stack is empty\n");
        return;
    }

    printf("Stack: ");

    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    printf("\n");
}

int main()
{
    push(10);
    push(20);
    push(30);

    display();

    return 0;
}

