// Find the digit that occurs the most times in an integer number.
#include <stdio.h>

int main()
{
    long long num;
    printf("Enter a number: ");
    scanf("%lld", &num);

    int freq[10] = {0};
    int digit;

    while (num > 0)
    {
        digit = num % 10;
        freq[digit]++;
        num /= 10;
    }

    int maxDigit = 0;
    int maxCount = freq[0];

    for (int i = 1; i < 10; i++)
    {
        if (freq[i] > maxCount)
        {
            maxCount = freq[i];
            maxDigit = i;
        }
    }

    printf("%d", maxDigit);
    return 0;
}
