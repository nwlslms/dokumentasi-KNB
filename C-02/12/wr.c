#include <stdio.h>

int tambah (int a, int b) {
    printf("Di dalam fungsi hasil %d + %d: %d\n", a, b, a + b);
    return a + b;
}

int kurang (int a, int b) {
    return a - b;
}

float luas(float r) {
    return 3.14 * r * r;
}

int main () {
    int a = 10;
    int b = 12;
    // int hasil = a + b;
    int hasil = tambah(a, b);
    printf("Di luar fungsi: %d", hasil);
    return 0;
}