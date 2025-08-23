//Write a program to convert temprature from celsius to fahrenheit

#include <stdio.h>

int main() {
    float celsius;

    printf("Enter temperature in celsius: ");
    scanf("%f",&celsius);

    float conv=(9.0/5.0*celsius)+32;
    
    printf("%.2f Celsius= %.2f Fahrenheit",celsius,conv);
    
    return 0;
}
