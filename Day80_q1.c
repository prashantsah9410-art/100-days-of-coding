/* Q130 (File Handling)
Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.
*/

#include <stdio.h>

int main() {
    FILE *fp = fopen("students.txt", "w");

    int n;
    scanf("%d", &n);

    char name[100];
    int roll;
    float marks;

    for (int i = 0; i < n; i++) {
        scanf("%s %d %f", name, &roll, &marks);
        fprintf(fp, "%s %d %.2f\n", name, roll, marks);
    }
    fclose(fp);

    fp = fopen("students.txt", "r");

    while (fscanf(fp, "%s %d %f", name, &roll, &marks) == 3)
        printf("%s %d %.2f\n", name, roll, marks);

    fclose(fp);
}
