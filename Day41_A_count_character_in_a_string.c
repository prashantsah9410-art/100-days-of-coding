// Count characters in a string without using built-in length functions.
#include <stdio.h>

int main() {
    char characters[100];
    int count=0;
    printf("Enter a character here: ");
    fgets(characters,100,stdin);

    for(int i=0; characters[i]!='\0'; i++){
    count++;
    }
    int length=count-1;
    printf("Length of characters is: %d",length);
    return 0;
}
