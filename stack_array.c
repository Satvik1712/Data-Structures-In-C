#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#define SIZE 10

int stack[SIZE];
int top=-1;
void push();
void pop();
void show();
void isfull();
void isempty();

int main(){
    int choice;
    while(1){
        /* Menu */
        printf("    STACK IMPLEMENTATION PROGRAM    \n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Traverse\n");
        printf("4. Size\n");
        printf("5. Check the Stack is Empty\n");
        printf("6. Check the Stack is Full\n");
        printf("7. Exit\n");
        printf("top is %d\n",top);
        printf("Enter your choice: ");

        scanf("%d", &choice);

        switch(choice){
            case 1: 
                   push();
                   break;
            case 2:
                   pop();
                   break;
            case 3:
                  show();
                  break;
            case 4: 
                   printf("Stack size: %d\n", top + 1);
                   break;
            case 5:
                   isempty();
                   break;
            case 6:
                   isfull();
                   break;
            case 7:
                   printf("Exiting from app.\n");
                   exit(0);
                   break;
            default: 
                printf("Invalid choice, please try again.\n");
        }
        printf("\n");      
    }
    return 0;
}

void push(){
    int data;
    printf("Enter the data to be pushed\n");
    scanf("%d",&data);
    if (top==SIZE)
    {
        printf("Stack Overflow, can't add more element element to stack.\n");
        return;
    }
    else{
    top++;
    stack[top] = data;

    printf("Data pushed to stack.\n");
    }
}

void pop(){
    if (top < 0){
        printf("The Stack is Empty\n");
    }
    else{
        printf("The Top element of the Stack is %d",stack[top]);
        top--;
    }
}

void isempty(){
    if(top == -1){
        printf("The Stack is Empty\n");
    }
    else{
        printf("The Stack is Not Empty\n");
    }
}

void isfull(){
    if (top == SIZE){
        printf("The Stack is Full\n");
    }
    else{
        printf("The Stack is Not Full\n");
    }
}

void show(){
     if(top == -1)
      printf("The stack is empty.\n");
   else{
      int i;
      printf("Elements of the Stack are: [");
      for(i=top; i>=0; i--)
     printf("%d    ",stack[i]);
     printf("\b\b\b\b]\n");
   }
}