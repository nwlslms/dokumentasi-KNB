#include <stdio.h>
#include <string.h>

#define MAX_MENU 5
#define MAX_ITEM_PESANAN 3

char nama_menu[MAX_MENU][30] = {
    "Nasi Goreng",
    "Mie Ayam",
    "Soto Ayam",
    "Es Teh Manis",
    "Jus Alpukat"
};
int harga_menu[MAX_MENU] = {15000, 12000, 13000, 5000, 10000};

int total_pendapatan = 0;

void tampilkan_menu() {
    printf("\n--- DAFTAR MENU ---\n");
    for (int i = 0; i < MAX_MENU; i++) {
        printf("%d. %-20s - Rp %5d\n", i + 1, nama_menu[i], harga_menu[i]);
    }
}

int buat_pesanan(int no_meja) {
    int pilihan[MAX_ITEM_PESANAN];
    int jumlah_item = 0;
    int total = 0;

    printf("Masukkan nomor meja (1-10): ");
    scanf("%d", &no_meja);

    while (no_meja < 1 || no_meja > 10) {
        printf("Nomor meja tidak valid! Masukkan antara 1-10: ");
        scanf("%d", &no_meja);
    }

    printf("Pilih hingga %d item (masukkan 0 untuk selesai):\n", MAX_ITEM_PESANAN);
    for (int i = 0; i < MAX_ITEM_PESANAN; i++) {
        printf("Pilih item ke-%d (1-%d, atau 0 untuk selesai): ", i + 1, MAX_MENU);
        scanf("%d", &pilihan[i]);

        if (pilihan[i] == 0) break;

        if (pilihan[i] < 1 || pilihan[i] > MAX_MENU) {
            printf("Pilihan tidak valid, item ini dilewati.\n");
            pilihan[i] = 0;
        } else {
            total += harga_menu[pilihan[i] - 1];
            jumlah_item++;
        }
    }

    printf("\nPesanan meja %d: ", no_meja);
    int pertama = 1;
    for (int i = 0; i < MAX_ITEM_PESANAN; i++) {
        if (pilihan[i] >= 1 && pilihan[i] <= MAX_MENU) {
            if (!pertama) printf(", ");
            printf("%s", nama_menu[pilihan[i] - 1]);
            pertama = 0;
        }
    }
    printf("\nTotal: Rp %d\n", total);

    return total;
}

void proses_bayar(int total, int *kembalian) {
    int bayar;
    printf("Total tagihan: Rp %d\n", total);
    printf("Masukkan pembayaran: Rp ");
    scanf("%d", &bayar);

    if (bayar < 0) {
        printf("Jumlah pembayaran tidak valid!\n");
        *kembalian = -1;
        return;
    }

    if (bayar < total) {
        printf("Uang kurang! Kekurangan: Rp %d\n", total - bayar);
        *kembalian = -1;
    } else {
        *kembalian = bayar - total;
        printf("Kembalian: Rp %d\n", *kembalian);
        printf("Terima kasih, Bu Sari senang melayani Anda!\n");
        total_pendapatan += total;
    }
}

int main() {
    int pilihan_menu;
    int total_pesanan = 0;
    int kembalian;

    printf("=============================\n");
    printf("  WARUNG MAKAN BU SARI\n");
    printf("=============================\n");

    do {
        printf("\n1. Lihat Daftar Menu\n");
        printf("2. Buat Pesanan\n");
        printf("3. Proses Pembayaran\n");
        printf("4. Keluar\n");
        printf("Pilih menu: ");
        scanf("%d", &pilihan_menu);

        switch (pilihan_menu) {
            case 1:
                tampilkan_menu();
                break;

            case 2:
                total_pesanan = buat_pesanan(0);
                break;

            case 3:
                if (total_pesanan == 0) {
                    printf("Belum ada pesanan aktif!\n");
                } else {
                    proses_bayar(total_pesanan, &kembalian);
                    if (kembalian >= 0) {
                        total_pesanan = 0;
                    }
                }
                break;

            case 4:
                printf("\nTotal pendapatan hari ini: Rp %d\n", total_pendapatan);
                printf("Sampai jumpa!\n");
                break;

            default:
                printf("Pilihan tidak valid!\n");
        }

    } while (pilihan_menu != 4);

    return 0;
}