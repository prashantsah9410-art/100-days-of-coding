/* Q145 (Enum)
Return a structure containing top student's details from a function.
*/

#include <stdio.h>

struct Student { char name[100]; int roll; float marks; };

struct Student top(struct Student s[], int n) {
    int idx = 0;
    for (int i=1;i<n;i++)
        if (s[i].marks > s[idx].marks) idx = i;
    return s[idx];
}

int main() {
    int n;
    scanf("%d", &n);

    struct Student s[n];
    for (int i=0;i<n;i++)
        scanf("%s %d %f", s[i].name, &s[i].roll, &s[i].marks);

    struct Student t = top(s, n);
    printf("%s %d %.2f", t.name, t.roll, t.marks);
}
