/* Q141 (Enum)
Define a structure Student with name, roll_no, and marks, then read and print one student's data.
*/

#include <stdio.h>

struct Student { char name[100]; int roll; float marks; };

int main() {
    struct Student s;
    scanf("%s %d %f", s.name, &s.roll, &s.marks);
    printf("%s %d %.2f", s.name, s.roll, s.marks);
}
