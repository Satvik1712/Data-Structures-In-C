#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left;
    struct node *right;
};
struct node *root=NULL;

struct node *create(){
    int x;
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter Data-");
    scanf("%d",&x);
    if(x==-1){
        return 0;
    }
    else{
        newnode->data=x;
        printf("Enter Left Child of %d",x);
        newnode->left=create();
        printf("Enter Right child of %d",x);
        newnode->right=create();
        return newnode;
    }
}
void printInorder(struct node* root){
    if (root == NULL)
        return;
    printInorder(root->left);
    printf("%d ", root->data);
    printInorder(root->right);
}
void preordertraversal(struct node* root){
    if (root ==NULL)
        return;
    printf("%d  ",root->data);
    preordertraversal(root->left);
    preordertraversal(root->right);
}
void postordertraversal(struct node* root){
    if (root==NULL)
        return;
    postordertraversal(root->left);
    postordertraversal(root->right);
    printf("%d  ",root->data);
}
void main()
{
   int choice;
   while(1)
    {
      printf("\nSelect what you want to do in the Trees\n");
      printf(" 1. Create\n 2. Inorder Traversal\n 3. Preorder Traversal\n 4. Postorder Traversal\n 5. Quit\n");
      printf("Enter your choice: ");
      scanf("%d",&choice);
      switch(choice){
     case 1: root=create();
             break;
     case 2: printInorder(root);
             break;
     case 3: preordertraversal(root);
             break;
     case 4: postordertraversal(root);
             break;
     case 5: exit(0);
     default: printf("Please do a valid selection.\n");
      }
   }
   printf("\n");
}