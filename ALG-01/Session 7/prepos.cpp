#include <stdio.h>

int main () {
    // Pos
    int a = 10;
    printf("%d\n", a++);
    printf("%d\n", a--);
    printf("%d\n", a);

    // Pre
    int b = 12;
    printf("%d\n", ++b);
    printf("%d\n", --b);
    printf("%d\n", b);
    return 0;
}