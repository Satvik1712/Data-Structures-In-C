#include<stdio.h>
void main()
{
    int n,ele,pos;
    printf("Enter the number of elements is the array: ");
    scanf("%d",&n);
    int a[1000];
    printf("Enter the elements of the array.\n");
    for(int i=0;i<n;i++)
    {
        printf("Enter the a[%d] element: ",i);
        scanf("%d",&a[i]);
    }
    printf("The entered array is [");
    for(int i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }
    printf("\b\b]\n");
    printf("Enter the position of element to be deleted at:");
    scanf("%d",&pos);
    for(int i=pos-1;i<n;i++)
    {
        a[i]=a[i+1];
    }
    n--;
    printf("The array after deletion is ");
    for(int i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }
}