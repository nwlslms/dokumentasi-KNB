#include <stdio.h>
int main () {
    //*, /, +, -, %
    int a = 12;
    int b = 10;
    printf("%d + %d: %d\n", a, b, a + b);
    printf("%d - %d: %d\n", a, b, a - b);
    printf("%d * %d: %d\n", a, b, a * b);
    printf("%d / %d: %d\n", a, b, a / b);
    printf("%d %% %d: %d\n", a, b, a % b);

    //typecasting Ngerubah suatu nilai ke tipe lain
    float hasil = a / (double)b;
    printf("%f\n", hasil);
    char d = '2';
    int typecast = (int)d;
    printf("%d\n", typecast);
    return 0;
}