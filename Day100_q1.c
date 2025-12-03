/* Use pointer to struct to modify and display data using -> operator. */

#include <stdio.h>

struct Student {
    char name[100];
    int roll;
    float marks;
};

int main() {
    struct Student s;
    struct Student *ptr = &s;

    scanf("%s %d %f", ptr->name, &ptr->roll, &ptr->marks);

    printf("%s %d %.2f", ptr->name, ptr->roll, ptr->marks);

    return 0;
}
