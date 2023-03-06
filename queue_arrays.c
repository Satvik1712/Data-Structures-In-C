#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#define SIZE 10

int queue[SIZE];
int front=-1;
int rear=-1;
void enqueue();
void dequeue();
void display();
void isfull();
void isempty();
void size();

int main(){
    int choice;
    while(1){
        printf("    Queue IMPLEMENTATION PROGRAM    \n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Traverse\n");
        printf("4. Check the Queue is Empty\n");
        printf("5. Check the Queue is Full\n");
        printf("6. Exit\n");
        printf("Front is %d\n",front);
        printf("Rear is %d\n",rear);
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1: 
                   enqueue();
                   break;
            case 2:
                   dequeue();
                   break;
           case 3:
                  display();
                  break;
            case 4:
                   isempty();
                   break;
            case 5:
                   isfull();
                   break;
            case 6:
                   printf("Exiting from app.\n");
                   exit(0);
                   break;
            default: 
                printf("Invalid choice, please try again.\n");
        }
        printf("\n");      
    }
}
void enqueue(){   
    int item;  
    printf("Enter the element ");  
    scanf(" %d",&item);      
    if(rear == SIZE-1){  
    printf("OVERFLOW\n");
    rear--;  
    }  
    if(front == -1 && rear == -1){  
    front = 0;  
    rear = 0;  
    }  
    else{  
    rear = rear+1;  
    }  
    queue[rear] = item;  
    printf("Value inserted");      
}  
void dequeue(){
    if (front == -1 || front > rear)  {  
        printf("UNDERFLOW\n");   
    }  
    else  {  
    printf("The Deleted Element is %d\n",queue[front]);
    front++;
    if(front>rear){
        front=-1;
        rear=-1;
    }
    }  
}
void isfull(){
    if(front==0 && rear==SIZE-1){
        printf("Queue is Full\n");
    }
    else
    printf("Queue is Not Full\n");
}
void isempty(){
    if(front==rear){
        printf("Queue is Empty\n");
    }
    else{
        printf("Queue is Not Empty\n");
    }
}
void display()  
{  
    int i;  
    if(rear == -1){  
        printf("\nEmpty queue\n");  
    }  
    else{  
        for(i=front;i<=rear;i++) {  
            printf("\n%d\n",queue[i]);  
        }     
    }  
} 