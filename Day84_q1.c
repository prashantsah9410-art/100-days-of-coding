/* Q134 (Enum)
Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.
*/

#include <stdio.h>

enum status { SUCCESS, FAILURE, TIMEOUT };

int main() {
    enum status s;
    scanf("%d", &s);

    if (s==SUCCESS) printf("Success");
    else if (s==FAILURE) printf("Failure");
    else printf("Timeout");
}
