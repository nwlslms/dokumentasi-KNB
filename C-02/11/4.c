#include <stdio.h>
#define MAX_BULAN 120 //MACRO
// SEMUANYA HURUF BESAR

int main () {
    printf("=== SIMULASI TABUNGAN BULANAN ===\n");
    
    // Input awal
    double awal, setoran;
    int bulan;
    printf("Masukkan saldo awal (Rp): ");
    scanf("%lf", &awal);
    if (awal < 0) {
        printf("Input saldo awal tidak valid.\n");
        return 0;
    }
    printf("Masukkan setoran tiap bulan (Rp): ");
    scanf("%lf", &setoran);
    if (setoran < 0) {
        printf("Input setoran tidak valid.\n");
        return 0;
    }
    printf("Masukkan jumlah bulan simulasi (1 - 120): ");
    scanf("%d", &bulan);
    if (bulan < 1 || bulan > 120) {
        printf("Input jumlah bulan tidak valid!\n");
        return 0;
    }
    
    // Process
    double saldo[MAX_BULAN];
    double *p = saldo;

    *p = awal + setoran;

    for(int i = 1; i < bulan; i++) {
        // Untuk saldo di bulan x-1 yang kurang dari 5 juta, 0.4% Per bulan, kalau lebih 0.7% per bulan
        double sebelum = *(p + (i - 1)); // *(pointer)
        // 00x4 = Memori pertama
        // 00x8 = Bulan kedua
        // 00x12 = Bulan ketiga
        double rate;
        if (sebelum < 5000000) {
            rate = 0.004;
        } else {
            rate = 0.007;
        }

        double sekarang = (sebelum * (1.0 + rate)) + setoran;
        *(p + i) = sekarang;   
    }

    // Output
    printf("\nTABEL SALDO\n-----------------------------------------\nBulan\tSaldo (Rp)\n-----------------------------------------\n");
    for(int i = 0; i < bulan; i++) {
        printf("%d\t%.2lf\n", (i + 1), *(p + i));
    }
    printf("-----------------------------------------\n");
    printf("Saldo akhir setelah %d bulan: Rp %.2lf\n", bulan, *(p + (bulan-1)));
    //150000
    // ... 
    //2000000
    // 12 bulan

    // Optional
    printf("Masukkan target saldo (Rp) untuk dicari (0 jika skip): ");
    double check;
    scanf("%lf", &check);
    if (check > 0) {
        int ketemu = 0;
        for (int i = 0; i < bulan; i++) {
            if (*(p + i) >= check) {
                printf("Target tercapai pertama kali pada bulan ke-%d (saldo Rp %.2lf)\n", i + 1, *(p + i));
                ketemu = 1;
                break;
            }
        }
        if (ketemu == 0) {
            printf("Target belum tercapai dalam %d bulan\n", bulan);
        }
    }
    printf("\n=== SELESAI ===\n");
    return 0;
}

// TUGAS TAMBAHAN
/*
    BUAT SUPAYA BUNGANYA SESUAI INPUT USER
    Rentang bunga: 0 - 20%
    input
    bunga -> float point (desimal)
*/