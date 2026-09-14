#include <stdio.h>

int main () {
    short umur, status;
    scanf("%hd", &umur);
    scanf("%hd", &status);
    int harga = 25000;
    if (umur >= 12) {
        harga *= 2;
    }
    if (status == 1) {
        harga = harga + (harga * 0.2);
    }
    printf("%hd\n", harga);
    return 0;
}