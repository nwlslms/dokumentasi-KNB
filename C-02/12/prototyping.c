#include <stdio.h>

void operasi(int, int);
int tambah(int, int);

int main () {
    int a = 12, b = 10;
    operasi(a, b);
    return 0;
}

void operasi(int a, int b) {
    printf("%d + %d = %d\n",a, b, tambah(a, b));
    return;
}

int tambah(int a, int b) {
    return a + b;
}