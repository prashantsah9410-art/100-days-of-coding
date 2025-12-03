/* Q136 (Enum)
Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.
*/

#include <stdio.h>

enum menu { ADD, SUBTRACT, MULTIPLY };

int main() {
    enum menu choice;
    int a, b;
    scanf("%d %d %d", &choice, &a, &b);

    switch (choice) {
        case ADD: printf("%d", a+b); break;
        case SUBTRACT: printf("%d", a-b); break;
        case MULTIPLY: printf("%d", a*b); break;
    }
}
