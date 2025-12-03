/* Q127 (File Handling)
Write a program that reads text from input.txt, converts all lowercase 
letters to uppercase, and writes the result to output.txt.
*/

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *in = fopen("input.txt", "r");
    FILE *out = fopen("output.txt", "w");

    int c;
    while ((c = fgetc(in)) != EOF) {
        if (c >= 'a' && c <= 'z')
            c -= 32;
        fputc(c, out);
    }

    fclose(in);
    fclose(out);
}
