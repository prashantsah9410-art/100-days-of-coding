//Write a program to calculate the area and perimeter of a rectangle given its length and breadth

#include <stdio.h>

int main() {
    int l,b;

    printf("Enter the length of rectangle: ");
    scanf("%d",&l);

    printf("Enter the breadth of rectangle: ");
    scanf("%d",&b);

    int area=(l*b);
    int perimeter=2*(l+b);

    printf("Area=%d, Perimeter=%d",area,perimeter);
    return 0;
}
