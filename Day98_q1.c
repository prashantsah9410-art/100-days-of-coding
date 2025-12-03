/* Q148 (Enum)
Take two structs as input and check if they are identical.
*/

#include <stdio.h>

struct Student { char name[100]; int roll; float marks; };

int main() {
    struct Student a, b;
    scanf("%s %d %f", a.name, &a.roll, &a.marks);
    scanf("%s %d %f", b.name, &b.roll, &b.marks);

    if (a.roll==b.roll && a.marks==b.marks && strcmp(a.name,b.name)==0)
        printf("Identical");
    else
        printf("Not Identical");
}
