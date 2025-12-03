/* Q138 (Enum)
Print all enum names and integer values using a loop.
*/

#include <stdio.h>

enum nums { N1, N2, N3, N4, N5 };

int main() {
    for (int i=N1; i<=N5; i++)
        printf("%d ", i);
}
