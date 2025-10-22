// Count vowels and consonants in a string.
#include <stdio.h>

int main()
{
    char string[100];
    printf("Enter string: ");
    fgets(string, 100, stdin);
    int vowels = 0, consonant = 0;

    for (int i = 0; string[i] != '\0'; i++)
    {
        char ch = string[i];
        if (ch >= 'a' && ch <= 'z' || (ch >= 'A' && ch <= 'Z'))
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            {
                vowels++;
            }
            else
            {
                consonant++;
            }
        }
    }
    printf("vOWELS = %d  CONSONANT = %d", vowels, consonant);
    return 0;
}
