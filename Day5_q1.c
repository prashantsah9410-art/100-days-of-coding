#include <stdio.h>
#include <math.h>

int main() {
    
    float SI,CI,r,A,p,t,TE;

    printf("ENTER PRINCIPLE AMOUNT: \n");
    scanf("%f",&p);

    printf("ENTER RATE OF INTEREST: \n");
    scanf("%f", &r);

    printf("ENTER THE TIME IN YEARS: \n");
    scanf("%f",&t);

    SI=(p*r*t)/100;
    TE=p+SI;
    
    A=p*pow((1+r/100),t);

    CI=A-p;

    printf("Simple interest=%.2f\n",SI);
    printf("Total amount=%.2f\n",TE);
    printf("Compound Interest = %.2f\n", CI);
    printf("Total Amount = %.2f\n", A);

    return 0;
}
