/* Q123 (File Handling)
Read a text file and count the total number of characters, words, and lines. 
A word is defined as a sequence of non-space characters separated by spaces or newlines.
*/

#include <stdio.h>

int main() {
    FILE *fp = fopen("input.txt", "r");
    char c;
    int chars = 0, words = 0, lines = 0, inword = 0;

    while ((c = fgetc(fp)) != EOF) {
        chars++;

        if (c == '\n')
            lines++;

        if (c != ' ' && c != '\n') {
            if (!inword) {
                words++;
                inword = 1;
            }
        } else {
            inword = 0;
        }
    }

    printf("%d %d %d", chars, words, lines);
    fclose(fp);
}
