/* Q144 (Enum)
Write a function that accepts a structure as parameter and prints its members.
*/

#include <stdio.h>

struct Student { char name[100]; int roll; float marks; };

void print(struct Student s) {
    printf("%s %d %.2f", s.name, s.roll, s.marks);
}

int main() {
    struct Student s;
    scanf("%s %d %f", s.name, &s.roll, &s.marks);
    print(s);
}
