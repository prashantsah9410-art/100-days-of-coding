/* Q147 (Enum)
Store employee data in a binary file using fwrite() and read using fread().
*/

#include <stdio.h>

struct Emp { char name[100]; int id; float salary; };

int main() {
    struct Emp e;
    scanf("%s %d %f", e.name, &e.id, &e.salary);

    FILE *fp = fopen("emp.bin", "wb");
    fwrite(&e, sizeof(e), 1, fp);
    fclose(fp);

    struct Emp r;
    fp = fopen("emp.bin", "rb");
    fread(&r, sizeof(r), 1, fp);
    fclose(fp);

    printf("%s %d %.2f", r.name, r.id, r.salary);
}
