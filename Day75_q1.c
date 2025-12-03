/* Q125 (File Handling)
Open an existing file in append mode and allow the user to enter a new line of text. 
Append the text at the end without overwriting existing content.
*/

#include <stdio.h>

int main() {
    char fname[100], text[500];
    scanf("%s", fname);
    getchar();
    fgets(text, 500, stdin);

    FILE *fp = fopen(fname, "a");
    fputs(text, fp);
    fclose(fp);
}
