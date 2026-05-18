// #include <stdio.h>

// int tambah(int a, int b) {
//     return a + b;
// }

// int kurang(int a, int b) {
//     return a - b;
// }

// int kali (int a, int b) {
//     return a * b;
// }

// int main () {
//     printf("Masukkan a: ");
//     int a, b;
//     scanf("%d", &a);
//     printf("Masukkan b: ");
//     scanf("%d", &b);
//     int hasiltambah, hasilkurang, hasilkali;
//     hasiltambah = tambah(a, b);
//     hasilkurang = kurang(a, b);
//     hasilkali = kali(a, b);
//     printf("%d + %d = %d\n%d - %d = %d\n%d * %d =  %d\n", a, b, hasiltambah, a, b, hasilkurang, a, b, hasilkali);
//     return 0;
// }

// #include <stdio.h>



// void proses(int a, int b, int *tambah, int *kurang, int *kali) {
//     *tambah = a + b;
//     *kurang = a - b;
//     *kali = a * b;
// }

// int main () {
//     printf("Masukkan a: ");
//     int a, b;
//     scanf("%d", &a);
//     printf("Masukkan b: ");
//     scanf("%d", &b);
//     int hasiltambah, hasilkurang, hasilkali;
//     proses(a, b, &hasiltambah, &hasilkurang, &hasilkali);
//     printf("%d + %d = %d\n%d - %d = %d\n%d * %d =  %d\n", a, b, hasiltambah, a, b, hasilkurang, a, b, hasilkali);
//     return 0;
// }

#include <stdio.h>

int hasiltambah, hasilkurang, hasilkali;

void proses(int a, int b) {
    hasiltambah = a + b;
    hasilkurang = a - b;
    hasilkali = a * b;
}

int main () {
    printf("Masukkan a: ");
    int a, b;
    scanf("%d", &a);
    printf("Masukkan b: ");
    scanf("%d", &b);
    proses(a, b);
    printf("%d + %d = %d\n%d - %d = %d\n%d * %d =  %d\n", a, b, hasiltambah, a, b, hasilkurang, a, b, hasilkali);
    return 0;
}