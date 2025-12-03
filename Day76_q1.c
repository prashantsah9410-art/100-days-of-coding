/* Q126 (File Handling)
Ask the user for a filename. Check if it exists by trying to open 
it in read mode. If the file pointer is NULL, print an error
 message; otherwise, read and display its content.
*/

#include <stdio.h>

int main() {
    char fname[100];
    scanf("%s", fname);

    FILE *fp = fopen(fname, "r");
    if (fp == NULL) {
        printf("File not found");
        return 0;
    }

    int c;
    while ((c = fgetc(fp)) != EOF)
        putchar(c);

    fclose(fp);
}
