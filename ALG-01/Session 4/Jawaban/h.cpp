#include <stdio.h>

int main () {
    short A, B;
    scanf("%hd %hd", &A, &B);
    short temp = A;
    A = B;
    B = temp;
    printf("%hd %hd", A, B);
    return 0;
}