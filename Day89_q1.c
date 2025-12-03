/* Q139 (Enum)
Show that enums store integers by printing assigned values.
*/

#include <stdio.h>

enum val { X=5, Y=20, Z=100 };

int main() {
    printf("%d %d %d", X, Y, Z);
}
