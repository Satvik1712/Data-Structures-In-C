#include<stdio.h>
#include<stdlib.h>
#define n 5

int main(){
    int a[n],i,j,key;
    j=0;
     for(i=0;i<n;i++){
        printf("enter the element a[%d]",i);
        scanf("%d",&a[i]);
    }
    printf("The elements in the array are: ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\nEnter an Element to Search: ");
    scanf("%d",&key);
    for(i=0;i<n;i++){
        if(a[i]==key){
            printf("The Element is found in the index %d\n",i);
            j++;
        }
    }
    if(j==0){
        printf("The Element is not found in the Array\n");
    }
}