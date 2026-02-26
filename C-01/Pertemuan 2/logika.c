#include <stdio.h>

int main () {
    //OR, AND, NOT
    /*
    ||
    1 1 1
    1 0 1
    0 1 1
    0 0 0*/
    printf("%d || %d : %d\n", 1, 1, 1 || 1);
    printf("%d || %d : %d\n", 1, 0, 1 || 0);
    printf("%d || %d : %d\n", 0, 1, 0 || 1);
    printf("%d || %d : %d\n", 0, 0, 0 || 0);
    /*
    &&
    1 1 1
    1 0 0
    0 1 0
    0 0 0*/
    printf("%d && %d : %d\n", 1, 1, 1 && 1);
    printf("%d && %d : %d\n", 1, 0, 1 && 0);
    printf("%d && %d : %d\n", 0, 1, 0 && 1);
    printf("%d && %d : %d\n", 0, 0, 0 && 0);
    /*
    !
    1 0
    0 1
    */
    printf("!%d: %d\n", 1, !1);
    printf("!%d: %d\n", 0, !0);
    return 0;
}