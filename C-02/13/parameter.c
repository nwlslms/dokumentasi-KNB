#include <stdio.h>

int tambah(int a, int b) {
    return a + b;
}

void tambah_simpan(int a, int b, int *c) {
    *c = a + b;
    printf("%d + %d = %d\n", a, b, *c);
    return;
}

int main () {
    int a = 10, b = 12, c;
    c = tambah(a, b);
    printf("%d + %d = %d\n", a, b, tambah(a, b));

    tambah_simpan(a, b, &c);
    printf("%d + %d = %d\n", a, b, c);
    return 0;
}