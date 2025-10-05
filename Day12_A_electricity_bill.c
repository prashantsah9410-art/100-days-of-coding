// Write a program to calculate an electricity bill based on units consumed.

#include <stdio.h>

int main()
{
    int units;
    int bill;

    printf("Enter the units consumed: ");
    scanf("%d", &units);

    if (units > 0 && units <= 50)
    {
        bill = (units * 5);
    }
    else if (units >50 && units <= 150)
    {
        bill = (50*5) + (units - 50) * 7;
    }
    else if (units > 150 && units <= 250)
    {
        bill = (50 * 5) + (100 * 7) + (units - 150) * 12;
    }
    if (units == 250)
    {
        bill += 50;
    }
    printf("Bill: %d Rupees", bill);
    return 0;
}
