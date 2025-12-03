/* Q124 (File Handling)
Take two filenames from the user – a source file and a destination file. 
Copy all the content from the source file to the destination file using 
fgetc() and fputc().
*/

#include <stdio.h>

int main() {
    char src[100], dest[100];
    scanf("%s %s", src, dest);

    FILE *f1 = fopen(src, "r");
    FILE *f2 = fopen(dest, "w");

    int ch;
    while ((ch = fgetc(f1)) != EOF)
        fputc(ch, f2);

    fclose(f1);
    fclose(f2);
}
