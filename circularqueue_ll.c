#include<stdio.h>
#include<stdlib.h>
struct node{
   int data;
   struct node* next;
};
struct node *f = NULL;
struct node *r = NULL;
void print();
void dequeue();
void enqueue();
int main()
{
	int opt,data;
	while(1){
		printf("1.Enqueue\n2.Traversal\n3.Dequeue\n4.Exit\n");
        printf("Enter Your Choice:-");
		scanf("%d",&opt);
		switch(opt){
		case 1:
			printf("Enter your data-");
			scanf("%d",&data);
			enqueue(data);
			break;
		case 2:
			print();
			break;
		case 3:
			dequeue();
			break;
		case 4:exit(0);
			break;
		default:
			printf("Incorrect Choice\n");	
		}
	}printf("\n");
}
void print(){
	struct node* t;
	t = f;
	if((f==NULL)&&(r==NULL))
		printf("\nQueue is Empty");
	else{
		do{
			printf("%d\n",t->data);
			t = t->next;
		}while(t != f);
	}
}
void dequeue(){
	struct node* t;
	t = f;
	if((f==NULL)&&(r==NULL))
		printf("\nQueue is Empty");
	else if(f == r){
		f = r = NULL;
		free(t);
	}
	else{
		f = f->next;
		r->next = f;
		free(t);
	}
}
void enqueue(int d){
	struct node* n;
	n = (struct node*)malloc(sizeof(struct node));
	n->data = d;
	n->next = NULL;
	if((r==NULL)&&(f==NULL)){
		f = r = n;
		r->next = f;
	}
	else{
		r->next = n;
		r = n;
		n->next = f;
	}
}