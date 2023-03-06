#include<stdio.h>
#include<stdlib.h>
void create();
void display();
void insert_begin();
void insert_end();
void insert_pos();
void delete_begin();
void delete_end();
void delete_pos();
void display_reverse();
struct node
{
    struct node *previous;
    int data;
    struct node *next;

};
struct node*head=NULL;
struct node*tail=NULL;
int main()
{
    int choice;
	while(1)
	{
	    printf("\n*****\n");
	    printf("0. Create\n");
	    printf("1. display\n");
	    printf("2. Insert Node at beginning\n");
	    printf("3. Insert Node in specific position\n");
	    printf("4. Insert Node at end of LinkedList\n");
	    printf("5. Delete Node at beginning\n");
	    printf("6. Delete Node at end\n");
	    printf("7. Delete Node at position\n");
	    printf("8. ** To exit **");
        printf("9: To print reverse");
	    
		printf("\n Enter your choice: ");
		scanf("%d",&choice);
   
   
   		switch(choice)
		{
			case 0: create();
					break;
			case 1: display();
					break;
			case 2: insert_begin();  
					break;
			case 3: insert_pos();
					break;
			case 4: insert_end();
				    break;
			//case 5: delete_begin();
					//break;
			//case 6: delete_end();
					break;
			//case 7: delete_pos();
				//	break;
			case 8: exit(0);

            case 9:
            display_reverse();
            break;
            default:printf("\n Wrong Choice");
                    break;
		}
    }
}
 void create()
{
            struct node*temp;
            //struct  node *tail=temp;
            temp=( struct node*)malloc(sizeof(struct node));
            printf("Enter data to be stored : ");
            scanf("%d",&temp->data);
            temp->next=NULL;
            temp->previous=NULL;
            if(head ==NULL)
            {
                head=temp;
                tail=temp;

                  head->previous=NULL;
                printf("Head=NULL\n");
            }
            else
            {
                struct node *ptr= head;

                while(ptr->next!=NULL)
                 {
                    ptr=ptr->next;
                 }
                ptr ->next=temp;
                temp->previous=ptr;
                tail=temp;
            }      
    printf("Node created\n");
    printf("---------------------------------------------------------------------\n-");
}
void display()
{
struct node *ptr =head;
printf("PRINTING ELEMENTS\n:");
            while(ptr!=NULL)
                {
                   // printf("Printing ELements\n");
                    printf("%d\t",ptr->data);
                    ptr=ptr->next;  
                }
   printf("---------------------------------------------------------------------\n-");
}
void insert_begin()
{
struct node*temp;
struct node *ptr=tail;
temp=(struct node*)malloc(sizeof(struct node));
printf("Enter the node data");
scanf("%d",&temp->data);
if(head==NULL)
{
head =temp;
return;
}
else
{
temp ->next =head;
head=temp;
}
}
void insert_pos()
{
struct node *temp;
temp=(struct node*)malloc(sizeof(struct node));
printf("Enter node  data :");
scanf("%d",&temp->data);

if(head==NULL)
{
head =temp;
}
else
{
struct node*prev_ptr;
struct node*ptr=head;
int pos;
printf("Enter postion");
scanf("%d",&pos);
for(int i=0;i<pos;i++)
{
prev_ptr = ptr;
ptr=ptr->next;
}
temp->next =ptr;
prev_ptr ->next =temp;
}
}
void insert_end()
{
    struct node*temp = head;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter data");
    scanf("%d",&temp->data);
    temp->next=NULL;
if(head==NULL)
{
    head=temp;
}
else
{
struct node*ptr=head;
while(ptr->next!=NULL)
{
    ptr=ptr->next;
}
ptr->next=temp;
}
}
void display_reverse()
{
 struct node*ptr=tail;
printf("PRINTING ELEMENTS in revrse order \n:");
            while(ptr!=NULL)
                {
                   // printf("Printing ELements\n");
                    printf("%d\t",ptr->data);
                    ptr=ptr->previous;  
                }
}