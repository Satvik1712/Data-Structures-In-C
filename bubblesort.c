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
//Bubble Sort
    for (int step = 0; step < n - 1; ++step) {
        for (int i = 0; i < n - step - 1; ++i) {
            if (a[i] > a[i + 1]) {
                int temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
    }
    printf("\nThe elements in the array after sorting are: ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}