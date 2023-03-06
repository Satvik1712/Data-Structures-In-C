#include <stdio.h>
int main()
{
    int a[50],i,n;
    printf("Enter the no .of elements in the array\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter the element a[%d]\n",i);
        scanf("%d",&a[i]);
    }
    printf("The elements in the array before insertion\n");
    for(i=0;i<n;i++){
        printf("The element %d is %d\n",i+1,a[i]);
    }
    printf("Enter the element to be inserted at the end\n");
    scanf("%d",& a[n]);
    printf("The elements in the array after inserting an element at the end\n");
    for(i=0;i<=n;i++){
        printf("The element %d is %d\n",i+1,a[i]);
    }
}