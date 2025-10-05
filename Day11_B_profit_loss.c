//Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>

int main()
{
    float CP, SP, Profit, Loss, profit_percent, loss_percent;

    printf("Enter the Cost price: ");
    scanf("%f", &CP);
    printf("Enter the Selling price: ");
    scanf("%f", &SP);

    if (SP > CP)
    {
        Profit = SP - CP;
        profit_percent = (Profit / CP) * 100;
        printf("The profit is %.2f%% percent", profit_percent);
    }
    else if (CP > SP)
    {
        Loss = CP - SP;
        loss_percent = (Loss / CP) * 100;
        printf("The loss is %.2f%%", loss_percent);
    }
    else
    {
        printf("No PROFIT No LOSS");
    }
    return 0;
}
