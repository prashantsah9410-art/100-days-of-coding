/* Q146 (Enum)
Create Employee structure with nested Date structure for joining date and print details.
*/

#include <stdio.h>

struct Date { int d, m, y; };
struct Emp { char name[100]; int id; struct Date join; };

int main() {
    struct Emp e;
    scanf("%s %d %d %d %d", e.name, &e.id, &e.join.d, &e.join.m, &e.join.y);
    printf("%s %d %d-%d-%d", e.name, e.id, e.join.d, e.join.m, e.join.y);
}
