#include <stdio.h>

int main () {
    printf(" 1 && 1 = %d\n", 1 && 1);
    printf(" 0 && 1 = %d\n", 0 && 1);
    printf(" 1 && 0 = %d\n", 1 && 0);
    printf(" 0 && 0 = %d\n", 0 && 0);

    int a = 12, b = 18;
    printf("12 <= 18 && 12 > 18 = %d\n", (a <= b) && (a > b));

    printf(" 1 || 1 = %d\n", 1 || 1);
    printf(" 0 || 1 = %d\n", 0 || 1);
    printf(" 1 || 0 = %d\n", 1 || 0);
    printf(" 0 || 0 = %d\n", 0 || 0);

    printf("!1 = %d\n", !1);
    printf("!0 = %d\n", !0);
    return 0;
}