#include <stdio.h>

int main () {
    char nama[21];
    printf("Masukkan nama lengkap: ");
    scanf(" %[^\n]", nama);
    printf("Hello, %s!\n", nama);
    printf("Masukkan bilangan phi: ");
    double phi1;
    scanf("%lf", &phi1);
    printf("Bilangan phi: %lf\n", phi1);
    printf("Masukkan TB & BB: ");
    short tB, BB;
    scanf("%hd %hd", &tB, &BB);
    printf("%s memiliki tinggi badan %hd dan berat %hd\n",nama, tB, BB);
    return 0;
}