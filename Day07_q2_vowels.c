// Write a program to input a character and check whether it is a vowel or consonant using if–else.

#include <stdio.h>

int main()
{
    char alph;

    printf("Enter a character: ");
    scanf("%c", &alph);

    if ((alph >= 'a' && alph <= 'z') || (alph >= 'A' && alph <= 'Z'))
    {
        if (alph == 'a' || alph == 'e' || alph == 'i' || alph == 'o' || alph == 'u' || alph == 'A' || alph == 'E' || alph == 'I' || alph == 'O' || alph == 'U')
        {
            printf("Entered character %c is a vowel", alph);
        }
        else
        {
            printf("Entered character %c is consonant", alph);
        }
    }
    else
    {
        printf("Entered character is not a alphabet");
    }
    return 0;
}
