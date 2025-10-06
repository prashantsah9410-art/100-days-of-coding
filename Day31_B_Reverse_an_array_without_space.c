// Reverse an array without taking extra space.
#include <stdio.h>

int main() {
    int n;
    printf("Enter the limit of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array: ");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int start=0,end=n-1;
    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    printf("Reversed array: ");
    for(int i=0; i<n; i++){
        printf("%d",arr[i]);
    }
    return 0;
}
