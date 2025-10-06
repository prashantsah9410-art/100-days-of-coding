// Search for an element in an array using linear search.
#include <stdio.h>

int main() {
    int n,i,a;
    printf("Enter the limit of array: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the elements of array: ");
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the element you want to find: ");
    scanf("%d",&a);

    for(i=0; i<n; i++){
        if(arr[i]==a){
            printf("Found at index %d",i);
            break;
        }
    }
        if(i==n){
            printf("No matching element");
        }

    
    return 0;
}
