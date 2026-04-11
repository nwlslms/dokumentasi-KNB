#include <stdio.h>

int main () {
    int a = 10;
    int *ptr = &a;
    printf("a\n%d\n%p", a, &a);
    printf("\n*ptr\n%d\n%p\n%p\n", *ptr, ptr, &ptr);
    *ptr = 12;
    printf("\n\n\n");
    printf("a\n%d\n%p", a, &a);
    printf("\n*ptr\n%d\n%p\n%p\n", *ptr, ptr, &ptr);
    return 0;
}