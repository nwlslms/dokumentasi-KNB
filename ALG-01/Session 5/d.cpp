#include <stdio.h>

int main () {
    char nama[21];
    short umur;
    scanf("%hd\n%s",  &umur, nama);
    printf("Nama: %s\nUmur: %d\n", nama, umur);
    return 0;
}