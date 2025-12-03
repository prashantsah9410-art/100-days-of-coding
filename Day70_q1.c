/* Q120: Write a program to take a string input. Change it to sentence case. */

#include <stdio.h>
#include <ctype.h>

int main() {
    char s[1000];
    fgets(s,1000,stdin);

    int i=0;
    while(s[i]==' ') i++;

    if(s[i]>='a' && s[i]<='z') s[i] -= 32;

    for(int j=i+1;s[j]!='\0';j++)
        if(s[j]>='A' && s[j]<='Z') s[j]+=32;

    printf("%s",s);
}
