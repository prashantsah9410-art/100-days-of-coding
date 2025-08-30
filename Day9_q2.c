//Write a program to assign grades based on a percentage input.

#include <stdio.h>

int main()
{
    int marks;
    printf("Enter the marks: ");
    scanf("%d", &marks);
    if (marks <= 100 && marks >= 90)
    {
        printf("Grade A");
    }
    else if (marks < 90 && marks >= 80)
    {
        printf("Grade B");
    }
    else if (marks < 80 && marks >= 70)
    {
        printf("Grade C");
    }
    else if (marks < 70 && marks >= 60)
    {
        printf("Grade D");
    }
    else if (marks < 60 && marks >= 50)
    {
        printf("Grade E");
    }
    else if (marks < 50 && marks >= 0)
    {
        printf("Fail");
    }
    else
    {
        printf("Invalid input");
    }
    return 0;
}
