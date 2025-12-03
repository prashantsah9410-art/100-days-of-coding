/* Q133 (Enum)
Create an enum for months and print how many days each month has.
*/

#include <stdio.h>

enum month { JAN=1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };

int main() {
    int m;
    scanf("%d", &m);

    if (m==1||m==3||m==5||m==7||m==8||m==10||m==12) printf("31");
    else if (m==4||m==6||m==9||m==11) printf("30");
    else printf("28");
}
