#include<stdio.h>
#include<stdlib.h>
struct node
{
   int data;
   struct node *next;
};
struct node *front=NULL;
struct node *rear=NULL;
void enqueue();
void dequeue();
void traverse();

void main()
{
   int choice;
   while(1)
    {
      printf("Select what you want to do in the Queue\n");
      printf(" 1. Enqueue\n 2. Dequeue\n 3. Traverse\n 4. Quit\n");
      printf("Enter your choice: ");
      scanf("%d",&choice);
      switch(choice){
     case 1: enqueue();
             break;
     case 2: dequeue();
             break;
     case 3: traverse();
             break;
     case 4: exit(0);
     default: printf("Please do a valid selection.\n");
      }
   }
   printf("\n");
}
void enqueue(){
    int val;
    printf("Enter the data\n");
    scanf("%d",&val);
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = val;
    newNode->next = NULL;
    if(front == NULL && rear == NULL)
        front = rear = newNode;
    else{
        rear->next = newNode;
        rear = newNode;
    }
}
void dequeue(){
    struct node *temp;
    if(front == NULL)
         printf("Queue is Empty. Unable to perform dequeue\n");
    else{
        temp = front;
        printf("The Deleted data is %d\n",temp->data);
        front = front->next;
        if(front == NULL)
            rear = NULL;
       free(temp);
    }
}
void traverse(){
    struct node *temp = front;
    while(temp){
        printf("%d   ",temp->data);
        temp = temp->next;
    }printf("\n");
}