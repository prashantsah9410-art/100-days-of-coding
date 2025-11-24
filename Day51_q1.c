/*
Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs.
The elements in the sorted array might be repeated. You need to print the first and last 
occurrence of the target and print the index of first and last occurrence. 
Print -1, -1 if the target is not present.
*/

#include <stdio.h>

int main() {
    int i,n,target,First=-1,Last=-1;
    printf("Enter the limit of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements of the sorted array: ");
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the element you want to find: ");
    scanf("%d",&target);
    for(i=0; i<n; i++){
        if(arr[i]==target){
            First=i;
            break;
        }
    }
    for(i=n-1; i>=0; i--){
        if(arr[i]==target){
            Last=i;
            break;
        }
    }
    printf("First occurence: %d  Last occurence: %d",First,Last);
    return 0;
}
