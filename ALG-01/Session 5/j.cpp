#include <stdio.h>

int main () {
    char nama[21];
    int nim;
    float nilai;
    scanf(" %s %d %d", nama, &nim, &nilai);
    printf("Mahasiswa\t: %s\nNIM\t\t: %d\nNilai\t\t: %.2f", nama, nim, nilai);
    return 0;
}