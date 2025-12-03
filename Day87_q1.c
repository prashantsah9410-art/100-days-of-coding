/* Q137 (Enum)
Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.
*/

#include <stdio.h>

enum role { ADMIN, USER, GUEST };

int main() {
    enum role r;
    scanf("%d", &r);

    if (r==ADMIN) printf("Admin Access");
    else if (r==USER) printf("User Access");
    else printf("Guest Access");
}
