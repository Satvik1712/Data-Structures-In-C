#include<stdio.h>
#include<stdlib.h>

struct node
{
   int data;
   struct node *next;
}*top = NULL;

void Push(int);
void Pop();
void Traverse();

void main()
{
   int choice, data;
   while(1)
    {
      printf("Select what you want to do in the stack\n");
      printf(" 1. Push\n 2. Pop\n 3. Traverse\n 4. Quit\n");
      printf("Enter your choice: ");
      scanf("%d",&choice);
      switch(choice){
     case 1: printf("Enter the data to be inserted: ");
             scanf("%d", &data);
             Push(data);
             break;
     case 2: Pop();
             break;
     case 3: Traverse();
             break;
     case 4: exit(0);
     default: printf("Please do a valid selection.\n");
      }
   }
}
void Push(int data)
{
   struct node *newnode;
   newnode = (struct node*)malloc(sizeof(struct node));
   newnode->data = data;
   if(top == NULL)
      newnode->next = NULL;
   else
      newnode->next = top;
   top = newnode;
}
void Pop()
{
   if(top == NULL)
      printf("Deletion is not possible as the stack is empty.\n");
   else{
      struct node *temp = top;
      printf("Deleted element is %d\n", temp->data);
      top = temp->next;
      free(temp);
   }
}
void Traverse()
{
   if(top == NULL)
      printf("The Stack is Empty.\n");
   else{
      struct node *temp = top;
      while(temp->next != NULL){
     printf("%d--->",temp->data);
     temp = temp -> next;
      }
      printf("%d--->NULL",temp->data);
   }
}