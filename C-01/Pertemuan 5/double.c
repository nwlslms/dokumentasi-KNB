#include <stdio.h>

int main () {
    int a = 10;
    int b = 12;
    int *ptr1 = &a;
    int **ptr2 = &ptr1;
    printf("ptr2: %p\n*ptr2: %p\n**ptr2: %d\n", ptr2, *ptr2, **ptr2);
    **ptr2 = 40;
    printf("%d\n", a);
    *ptr2 = &b;
    printf("%d", **ptr2);
    return 0;
}