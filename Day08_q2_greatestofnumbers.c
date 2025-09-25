//Write a program to input three numbers and find the largest among them using if–else.

#include <stdio.h>

int main() {
    int a,b,c;

    printf("Enter three number here: ");
    scanf("%d %d %d",&a,&b,&c);

    if(a==b&&b==c){
        printf("All numbers are equal");
    }else if(a>=b && a>=c){
        printf("%d is the greatest number",a);
    }else if(b>=a && b>=c){
        printf("%d is the greatest number",b);
    }else{
        printf("%d is the greatest number",c);
    }
    return 0;
}
