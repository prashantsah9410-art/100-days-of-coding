/* Q122: Open file and read all lines using fgets(). */

#include <stdio.h>

int main() {
    FILE *fp = fopen("info.txt","r");
    char line[500];

    while(fgets(line,500,fp))
        printf("%s",line);

    fclose(fp);
}
