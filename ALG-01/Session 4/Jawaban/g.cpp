#include <stdio.h>

int main () {
    short A, B;
    scanf("%hd %hd", &A, &B);
    short jumlah = A + B;
    short selisih = A - B;
    printf("Jumlah = %hd\n", jumlah);
    printf("Selisih = %hd\n", selisih);
    short kali = A * B;
    printf("Kali = %hd\n", kali);
    return 0;
}