#include <stdio.h>

int main () {
    int a, b;
    scanf("%d %d", &a, &b);
    // int hasil = a * b;
    printf("%d * %d = %d\n", a, b, a * b);
    printf("%d / %d = %d\n", a, b, a / b);
    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a- b);
    printf("%d %% %d = %d\n", a, b, a % b);
    return 0;
}