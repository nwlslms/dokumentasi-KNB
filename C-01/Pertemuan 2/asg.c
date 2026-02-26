#include <stdio.h>

int main () {
    //Operator Assignment '='
    int a = 12;
    int b = 10;

    int hasil = a + b;

    // hasil = hasil + 3;
    hasil += a * b * b / 200;
    hasil -= 10;
    hasil *= 12;
    hasil /= 1000;
    hasil %= 20;
    return 0;
}