#include <stdio.h>

int main () {
    int umur;
    float ipk;

    printf("Masukkan umur: ");
    scanf("%d", &umur);

    printf("Masukkan IPK: ");
    scanf("%f", &ipk);

    printf("Umur kamu: %d\n", umur);
    printf("IPK kamu: %f", ipk);
    return 0;
}