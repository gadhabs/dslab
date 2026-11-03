CIRCULAR QUEUE                                                                                                 
#include <stdio.h> 
#include <stdlib.h> 
#define MAX_SIZE 5 
int front = -1, rear = -1,i; int queue[MAX_SIZE];
// Function to check if the queue is empty int isEmpty()
{
return (front == -1 && rear == -1);
}
// Function to check if the queue is full int isFull()
{
return ((rear + 1) % MAX_SIZE == front);
}
// Function to add an element to the circular queue void enqueue(int data)
{
if (isFull())
{
printf("Queue is full- Overflow. Cannot enqueue.\n"); return;
}
if (isEmpty())
{
 front = rear = 0;
}
else
{
 rear = (rear + 1) % MAX_SIZE;
}
queue[rear] = data;
printf("%d added to the queue.\n", data);
}


// Function to delete an element from the circular queue void dequeue()
{
if (isEmpty()) {
printf("Queue is empty-Underflow Cannot dequeue.\n"); return;
}
printf("%d removed from the queue.\n", queue[front]); if (front == rear)
{
front = rear = -1;
}
else
{


}
}
 
front = rear = -1;





front = (front + 1) % MAX_SIZE;
 


// Function to search for an element in the circular queue int search(int key)
{
if (isEmpty())
{
printf("Queue is empty. Cannot search.\n"); return -1;
}
{


}
}
 
front = rear = -1;





front = (front + 1) % MAX_SIZE;
 


// Function to search for an element in the circular 
int search(int key)
{
if (isEmpty())
{
printf("Queue is empty. Cannot search.\n"); return -1;
}
i = front; do
{
if (queue[i] == key)
{
printf("%d found at position %d in the queue.\n", key, i); return i;
}
i = (i + 1) % MAX_SIZE;
} while (i != (rear + 1) % MAX_SIZE); printf("%d not found in the queue.\n", key);
return -1;
}
// Function to display the circular queue void display()
{
 
if (isEmpty())
{



}
 



printf("Queue is empty.\n"); return;
 
printf("Circular Queue: "); i = front;
do
{
printf("%d ", queue[i]);
i = (i + 1) % MAX_SIZE;
} while (i != (rear + 1) % MAX_SIZE); printf("\n");
}
int main()
{
int choice, data, key;
while (1) {
printf("\nCircular Queue Operations:\n"); printf("1. Add (Enqueue)\n");
printf("2. Delete (Dequeue)\n"); printf("3. Search\n");
printf("4. Display\n"); printf("5. Exit\n"); printf("Enter your choice: "); scanf("%d", &choice); switch (choice) {
case 1:
 






case 2:



case 3:






case 4:



case 5:
 
printf("Enter the element to add: "); scanf("%d", &data); enqueue(data);
break;


dequeue(); break;

printf("Enter the element to search: "); scanf("%d", &key);
search(key); break;

display(); break;

exit(0);

}
}


return 0;
}
 
default
}}}