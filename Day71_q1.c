/* Q121: Create info.txt, take name & age, write using fprintf(). */

#include <stdio.h>

int main() {
    char name[100];
    int age;
    scanf("%s %d",name,&age);

    FILE *fp = fopen("info.txt","w");
    fprintf(fp,"Name: %s\nAge: %d\n",name,age);
    fclose(fp);

    printf("Data saved");
}
