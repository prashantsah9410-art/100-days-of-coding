/* Q129 (File Handling)
A file numbers.txt contains a list of integers separated by spaces. 
Read all integers, compute their sum and average, and print both.
*/

#include <stdio.h>

int main() {
    FILE *fp = fopen("numbers.txt", "r");
    int x, sum = 0, count = 0;

    while (fscanf(fp, "%d", &x) == 1) {
        sum += x;
        count++;
    }

    printf("%d %.2f", sum, (float)sum / count);
    fclose(fp);
}
