#include <stdio.h>

int main () {
    // short siswa = 10000;
    // int hasil_kali = 213412342;
    // long long hasil_faktorial = 215234132452345LL;
    // printf("Isi variabel siswa: %hd\nSize: %d\n", siswa, sizeof(siswa));
    // printf("Isi variabel hasil_kali: %d\nSize: %d\n", hasil_kali, sizeof(hasil_kali));
    // printf("Isi variabel hasil_faktorial: %lld\nSize: %d\n", hasil_faktorial, sizeof(hasil_faktorial));

    // float phi1 = 3.1434f;
    // double phi2 = 3.1434523452;
    // printf("%f\n%lf\n", phi1, phi2);
    // if(phi1 == 3.1434) {
    //     printf("Sama");
    // }

    // char karakter = 'A';
    // char kata[] = "AYAM";

    // printf("%c\n%s\n", karakter, kata);
    printf("Kamu sudah makan belum: ");
    short makan;
    scanf("%hd", &makan);
    if(makan == 0) {
        printf("Belum makan!\n");
    } else {
        printf("Sudah makan\n");
    }
    return 0;
}