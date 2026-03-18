#include <stdio.h>

int main () {
    //>, <, >=, <=, ==, !
    // True / false 1 0
    int a = 10, b=10;
    printf("%d > %d: %d\n", a, b, a > b);
    printf("%d < %d: %d\n", a, b, a < b);
    printf("%d >= %d: %d\n", a, b, a >= b);
    printf("%d <= %d: %d\n", a, b, a <= b);
    printf("%d == %d: %d", a, b, a == b);
    return 0;
}