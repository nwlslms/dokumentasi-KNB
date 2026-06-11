#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define MAX 100

float nilai[MAX];
int totalSiswa = 0;

void menu();
void input();
void ringkasan();
void kategori();

int main () {
    menu();
    printf("DEBUG: PROGRAM ENDED\n");
    return 0;
}


void kategori() {
    printf("DETAIL KATEGORI\n");
    printf("No\tNilai\tKategori\n");
    printf("----------------------------\n");
    float *ptr = &nilai[0];
    for(int i = 0; i < totalSiswa; i++) {
        char kode;
        if (*(ptr+i) > 90) {
            kode = 'A';
        } else if (*(ptr+i) > 80) {
            kode = 'B';
        } else if (*(ptr+i) > 70) {
            kode = 'C';
        } else if (*(ptr+i) > 60) {
            kode = 'D';
        } else {
            kode = 'E';
        }
        printf("%d\t%.2f\t%c\n", (i+1), *(ptr+i), kode);
    }
}

void menu() {
    while(1) {
        system("cls");
        input();
        ringkasan();
        kategori();
        printf("=== SELESAI ===\n");
        system("PAUSE");
    }
}

void ringkasan() {
    printf("RINGKASAN\n");
    printf("Jumlah siswa\t: %d\n", totalSiswa);

    // Rata-rata
    float total = 0;
    float *ptr = &nilai[0];
    for (int i = 0; i < totalSiswa; i++) {
        total += *(ptr+i);
    }
    printf("Rata-rata\t: %.2f\n", (total / totalSiswa));

    printf("Nilai tertinggi\t: ");
    float terbesar = *ptr;
    for(int i = 0; i < totalSiswa; i++) {
        if(terbesar < *(ptr+i)) {
            terbesar = *(ptr+i);
        }
    }
    printf("%.2f\n", terbesar);

    printf("Nilai terendah\t: ");
    float terkecil = *ptr;
    for(int i = 0; i < totalSiswa; i++) {
        if (terkecil > *(ptr+i)) {
            terkecil = *(ptr+i);
        }
    }
    printf("%.2f\n", terkecil);

    int lulus = 0;
    printf("Lulus (>=75)\t: ");
    for(int i = 0; i < totalSiswa; i++) {
        if(*(ptr+i) >= 75) {
            lulus++;
        }
    }
    printf("%d\n", lulus);
    printf("Tidak lulus\t: %d\n", (totalSiswa - lulus));
}

void input() {
    printf("=== ANALISIS NILAI KELAS ===\n");
    do {
        printf("Masukkkan jumlah siswa (1-100): ");
        scanf("%d", &totalSiswa);
    } while (totalSiswa < 1 || totalSiswa > 100);
    float *ptr = &nilai[0];
    for (int i = 0; i < totalSiswa; i++) {
        float NILAI = -1;
        do {
            printf("Nilai siswa #%d (0-100): ", i+1);
            scanf("%f", &NILAI);
        } while (NILAI < 0 || NILAI > 100);
        *(ptr+i) = NILAI;
    }
}