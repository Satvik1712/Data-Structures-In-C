#include <stdio.h>
#define n 5

int binarySearch(int a[], int x, int low, int high) {
  while (low <= high) {
    int mid = low + (high - low) / 2;
    if (a[mid] == x)
      return mid;
    if (a[mid] < x)
      low = mid + 1;
    else
      high = mid - 1;
  }
  return -1;
}

int main() {
    int a[n],i,x;
     for(i=0;i<n;i++){
        printf("enter the element a[%d]",i);
        scanf("%d",&a[i]);
    }
    printf("The elements in the array are: ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\nEnter the Element to Search: ");
    scanf("%d",&x);
    int result = binarySearch(a, x, 0, n - 1);
    if (result == -1){
        printf("Not found");
    }
    else{
        printf("Element is found at index %d", result);
    }
  return 0;
}