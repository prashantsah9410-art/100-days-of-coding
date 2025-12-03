/* Q132 (Enum)
Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.
*/

#include <stdio.h>

enum light { RED, YELLOW, GREEN };

int main() {
    enum light s;
    scanf("%d", &s);

    if (s == RED) printf("Stop");
    else if (s == YELLOW) printf("Wait");
    else printf("Go");
}
