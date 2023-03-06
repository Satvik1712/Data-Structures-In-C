#include<stdio.h>
#include<stdlib.h>
#define n 5

int main(){
    int a[n],i;
     for(i=0;i<n;i++){
        printf("enter the element a[%d]",i);
        scanf("%d",&a[i]);
    }
    printf("The elements in the array before sorting are: ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
//Selection Sort
 for (int step = 0; step < n - 1; step++) {
    int min_idx = step;
    for (int i = step + 1; i < n; i++){
        if (a[i] < a[min_idx])
        min_idx = i;
        }
    int temp = a[min_idx];
    a[min_idx] = a[step];
    a[step] = temp;
 }
    printf("\nThe elements in the array after sorting are: ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}