//Write a program to find the roots of a quadratic equation and categorize them

#include <stdio.h>
#include <math.h>

int main() {
    float a,b,c,discriminant,root1,root2,realPart,imagPart;   
    
    printf("Enter the cofficient a,b and c: ");
    scanf("%f %f %f",&a,&b,&c);

    discriminant=(b*b)-(4*a*c);

    if(discriminant>0){
        root1=(-b+sqrt(discriminant))/(2*a);
        root2=(-b-sqrt(discriminant))/(2*a);
        printf("The roots are real and different\n");
        printf("The roots are %.2f and %.2f",root1,root2);
    }else if(discriminant==0){
        root1=root2=-b/(2*a);
        printf("Roots are real and equal");
        printf("The roots is same %.22f",root1);
    }else{
        realPart=-b/(2*a);
        imagPart= sqrt(-discriminant)/(2*a);
        printf("The roots are complex and different\n");
        printf("Root 1=%.2f + %.2fi\n",realPart,imagPart);
        printf("Root 2=%.2f - %.2fi\n",realPart,imagPart);
        }
    return 0;
}
