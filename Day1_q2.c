#include <stdio.h>

int main() {
    int a,b;

    printf("Enter the number a: ");
    scanf("%d",&a);
    printf("Enter the number b: ");
    scanf("%d",&b);
    
    int sum=(a+b);
    int difference=(a-b);
    int product=(a*b);
    
    printf("sum=%d, difference=%d, product=%d\n", sum,difference,product);

    if(b==0){
        printf("Quotient=undefined");
    }else{
        int quotient=(a/b);
        printf("Quotient=%d", quotient);
    }
    return 0;
}
