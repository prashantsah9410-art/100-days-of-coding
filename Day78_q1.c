/* Q128 (File Handling)
Read a text file and count how many vowels and consonants are 
in the file. Ignore digits and special characters.
*/

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp = fopen("input.txt", "r");
    int c, v = 0, con = 0;

    while ((c = fgetc(fp)) != EOF) {
        if (isalpha(c)) {
            char x = tolower(c);
            if (x=='a' || x=='e' || x=='i' || x=='o' || x=='u')
                v++;
            else
                con++;
        }
    }

    printf("%d %d", v, con);
    fclose(fp);
}
