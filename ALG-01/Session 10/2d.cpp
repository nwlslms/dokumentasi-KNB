#include <stdio.h>

int main () {
    // Persegi
    for(int baris = 0; baris < 5; baris++) {
        for(int kolom = 0; kolom < 5; kolom++) {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");
    // Persegi Panjang
    for(int baris = 0; baris < 2; baris++) {
        for(int kolom = 0; kolom < 10; kolom++) {
            printf("* ");
        }
        printf("\n");
    }

    printf("\n");
    // Segitiga Siku-Siku
    for(int baris = 0; baris < 5; baris++) {
        for(int kolom = 0; kolom <= baris; kolom++) {
            printf("* ");
        }
        printf("\n");
    }

    //Iterasi baris = 0
    //  0 <= 0 "* "

    //Iterasi baris = 1
    //  0 <= 1
    return 0;
}