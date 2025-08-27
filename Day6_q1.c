//Write a program to input an integer and check whether it is even or odd using if–else.



#include <stdio.h>

int main() {
    int n;
    printf("Enter the number to check: ");
    scanf("%d",&n);

    if(n%2==0) {
        printf("Number %d is Even",n);
    }else{
        printf("Number %d is Odd",n);
    }
    
    return 0;
}
