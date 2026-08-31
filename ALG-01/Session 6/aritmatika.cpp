#include <stdio.h>

int main () {
    int a, b;
    scanf("%d %d", &a, &b);
    // float pembagian = a / (float)b;
    printf("%d\n%d\n%f\n%d\n%d\n", (a + b), (a - b), (a / (float)b), (a * b), (a % b));
    return 0;
}