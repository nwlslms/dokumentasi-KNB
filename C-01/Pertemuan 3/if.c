#include <stdio.h>

int main () {
    //if condition
    //Kalau terpenuhi, maka lakukan
    printf("Apakah kamu sudah makan?: ");
    char jawaban;
    scanf("%c", &jawaban);
    // if (jawaban == 'y') {
    //     printf("Oke kamu sudah makan\n");
    // }

    //if-else

    // if (jawaban=='y') {
    //     printf("Oke, kamu sudah makan!\n");
    // } else {
    //     printf("Yah, kamu belom makan...\n");
    // }

    //if - else if - else
    if(jawaban == 'y') {
        printf("Oke, kamu sudah makan!\n");
    } else if (jawaban == 'n') {
        printf("Yah, kamu belom makan...\n");
    } else {
        printf("Kamu Typo!\n");
    }

    //if - else if - else if n = else
    printf("Masukkan hari dalam angka (Ahad = 0): ");
    int hari;
    scanf("%d", &hari);
    if (hari == 0) {
        printf("Ahad\n");
    } else if (hari == 1) {
        printf("Senin\n");
    } else if (hari == 2) {
        printf("Selasa\n");
    } else if (hari == 3) {
        printf("Rabu\n");
    } else if (hari == 4) {
        printf("Kamis\n");
    } else if (hari == 5) {
        printf("Jumat\n");
    } else if (hari == 6) {
        printf("Sabtu\n");
    } else {
        printf("Typo!\n");
    }

    //Cek bilangan
    printf("Masukkan bilangan: ");
    int bil;
    scanf("%d", &bil);
    if(bil == 0) {
        printf("Ini adalah bilangan 0 mutlak\n");
    } else if (bil < 1) {
        if(bil % 2 == 0) {
            printf("Ini adalah bilangan negatif genap\n");
        } else {
            printf("Ini adalah bilangan negatif ganjil\n");
        }
    } else if (bil > 1) {
        if(bil %2 == 0) {
            printf("Ini adalah bilangan positif genap\n");
        } else {
            printf("Ini adalah bilangan positif ganjil\n");
        }
    }

    return 0;
}