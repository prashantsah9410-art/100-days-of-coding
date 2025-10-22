// Print each character of a string on a new line.
#include <stdio.h>

int main() {
    char string[100];
    printf("Enter string: ");
    fgets(string,100,stdin);

    for(int i=0; string[i]!='\0'; i++){
        printf("%c",string[i]);
        printf("\n");
    }
    return 0;
}
