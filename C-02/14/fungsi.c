#include <stdio.h>
#include <stdlib.h>
#define MAX_BULAN 120

double saldo[MAX_BULAN];

void menu();
void proses(double, double, int);
void tampil(int);

int main () {
    menu();
    printf("PROGRAM ENDED!\n");
    system("PAUSE");
}

void menu() {
    while(1) {
        system("CLS");
        double awal = -1, setoran = -1;
        int bulan;
        printf("=== SIMULASI TABUNGAN BULANAN ===\n");
        do {
            printf("Masukkan saldo awal (Rp): ");
            scanf("%lf", &awal);
            if(awal == -2) {
                return;
            }
        } while (awal < 0);
        do {
            printf("Masukkan setoran tiap bulan (Rp0): ");
            scanf("%lf", &setoran);
        } while (setoran < 0);
        do {
            printf("Masukkan jumlah bulan simulasi (1 - 120): ");
            scanf("%d", &bulan);
        } while (bulan < 1 || bulan > 120);

        proses(awal, setoran, bulan);

        tampil(bulan);
        
        system("PAUSE");

    }
}

void proses(double awal, double setoran, int bulan) {
    double *p = saldo;
    *p = awal + setoran;
    for (int i = 1; i < bulan; i++) {
        double sebelum = *(p + (i - 1));
        double rate;
        if (sebelum < 5000000) {
            rate = 0.004;
        } else {
            rate = 0.007;
        }
        double sekarang = (sebelum * (1.0 + rate)) + setoran;
        *(p + i) = sekarang;
    }

}

void tampil(int bulan) {
    double *p = saldo;
    printf("\nTABEL SALDO\n-----------------------------------------\nBulan\tSaldo (Rp)\n-----------------------------------------\n");
    for(int i = 0; i < bulan; i++) {
        printf("%d\t%.2lf\n", (i + 1), *(p + i));
    }
    printf("-----------------------------------------\n");
    printf("Saldo akhir setelah %d bulan: Rp %.2lf\n", bulan, *(p + (bulan-1)));
}