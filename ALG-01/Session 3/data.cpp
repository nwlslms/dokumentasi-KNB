#include <stdio.h>

int main () {
    short a = 32769;
    printf("%hd\n", a);

    int b = -2147483648;
    printf("%d\n", b);

    long c = -2147483648;
    printf("%ld\n", c);

    float d = 1.23456789123456789;
    double e = 1.23456789123456789123456789;
    printf("%.16f\n%.25lf\n", d, e);

    unsigned short f;
    unsigned int g;
    unsigned long h;
    
    return 0;
}