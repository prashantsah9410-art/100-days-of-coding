/* Q140 (Enum)
Define a struct with enum Gender and print person's gender.
*/

#include <stdio.h>

enum Gender { MALE, FEMALE, OTHER };

struct person { char name[100]; enum Gender g; };

int main() {
    struct person p;
    scanf("%s %d", p.name, (int*)&p.g);
    printf("%s %d", p.name, p.g);
}
