//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include <stdio.h>

int main() {
    int a,b,c;

    printf("Enter the sides of triangle: ");
    scanf("%d %d %d",&a,&b,&c);

    if(a==b && a==c){
        printf("This is a Equilateral triangle");
    }else if(a==b||b==c||a==c){
        printf("This is a Isosceles triangle");
    }else{
        printf("This is a Scalene triangle");
    } 
    
    return 0;
}
