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
//Inserction Sort
    for (int step = 1; step < n; step++) {
        int key = a[step];
        int j = step - 1;
        while (key < a[j] && j >= 0){
            a[j + 1] = a[j];
            --j;
        }
        a[j + 1] = key;
    }
    printf("\nThe elements in the array after sorting are: ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}