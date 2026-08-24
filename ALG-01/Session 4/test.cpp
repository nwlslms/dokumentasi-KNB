#include <stdio.h>

int main () {
    char awal = 'A';
    int akhir = (int)awal;

    float phi = 3.14;
    int phi_i = (int)phi;
    printf("%d\n%d\n%c", akhir, phi_i, akhir);

    return 0;
}