//Write a program to calculate the area and circumfrence of a circle given its radius

#include <stdio.h>

int main() {
    int r;

    printf("Enter the radius of circle: ");
    scanf("%d", &r);

    float area=(3.14*r*r);
    float circumference=(2*3.14*r);

    printf("Area=%.2f, Circumference=%.2f",area,circumference);
    
    return 0;
}
