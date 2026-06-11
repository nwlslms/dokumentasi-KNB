#include <stdio.h>
#include <string.h>

#define MAX_BUKU 10

char judul[MAX_BUKU][50];
char pengarang[MAX_BUKU][50];
int status[MAX_BUKU];
int jumlah_buku = 0;

void tambah_buku(char jdl[], char pgr[]) {
    if (jumlah_buku >= MAX_BUKU) {
        printf("Koleksi penuh! Maksimal %d buku.\n", MAX_BUKU);
        return;
    }
    strcpy(judul[jumlah_buku], jdl);
    strcpy(pengarang[jumlah_buku], pgr);
    status[jumlah_buku] = 0;
    jumlah_buku++;
    printf("Buku berhasil ditambahkan!\n");
}

void tampilkan_buku() {
    if (jumlah_buku == 0) {
        printf("Koleksi masih kosong.\n");
        return;
    }
    printf("\n%-3s | %-25s | %-25s | %s\n", "No", "Judul", "Pengarang", "Status");
    printf("----+---------------------------+---------------------------+----------\n");
    for (int i = 0; i < jumlah_buku; i++) {
        printf("%-3d | %-25s | %-25s | %s\n",
               i + 1,
               judul[i],
               pengarang[i],
               status[i] == 0 ? "Tersedia" : "Dipinjam");
    }
}

void pinjam_buku(int index) {
    if (index < 1 || index > jumlah_buku) {
        printf("Nomor buku tidak valid!\n");
        return;
    }
    int i = index - 1;
    if (status[i] == 1) {
        printf("Maaf, buku \"%s\" sedang dipinjam.\n", judul[i]);
    } else {
        status[i] = 1;
        printf("Buku \"%s\" berhasil dipinjam!\n", judul[i]);
    }
}

void kembalikan_buku(int index, int *total_kembali) {
    if (index < 1 || index > jumlah_buku) {
        printf("Nomor buku tidak valid!\n");
        return;
    }
    int i = index - 1;
    if (status[i] == 0) {
        printf("Buku \"%s\" tidak sedang dipinjam!\n", judul[i]);
    } else {
        status[i] = 0;
        (*total_kembali)++;
        printf("Buku \"%s\" berhasil dikembalikan! Terima kasih.\n", judul[i]);
    }
}

int main() {
    int pilihan;
    int no_buku;
    int total_kembali = 0;
    char inp_judul[50], inp_pengarang[50];

    printf("=====================================\n");
    printf("   PERPUSTAKAAN KECIL PAK HENDRA\n");
    printf("=====================================\n");

    do {
        printf("\n1. Tambah Buku\n");
        printf("2. Tampilkan Semua Buku\n");
        printf("3. Pinjam Buku\n");
        printf("4. Kembalikan Buku\n");
        printf("5. Keluar\n");
        printf("Pilih menu: ");
        scanf("%d", &pilihan);
        getchar();

        switch (pilihan) {
            case 1:
                printf("Judul buku  : ");
                fgets(inp_judul, 50, stdin);
                inp_judul[strcspn(inp_judul, "\n")] = 0;

                printf("Pengarang   : ");
                fgets(inp_pengarang, 50, stdin);
                inp_pengarang[strcspn(inp_pengarang, "\n")] = 0;

                tambah_buku(inp_judul, inp_pengarang);
                break;

            case 2:
                tampilkan_buku();
                break;

            case 3:
                if (jumlah_buku == 0) {
                    printf("Belum ada buku dalam koleksi.\n");
                    break;
                }
                tampilkan_buku();
                printf("Masukkan nomor buku yang ingin dipinjam: ");
                scanf("%d", &no_buku);
                pinjam_buku(no_buku);
                break;

            case 4:
                if (jumlah_buku == 0) {
                    printf("Belum ada buku dalam koleksi.\n");
                    break;
                }
                tampilkan_buku();
                printf("Masukkan nomor buku yang dikembalikan: ");
                scanf("%d", &no_buku);
                kembalikan_buku(no_buku, &total_kembali);
                break;

            case 5: {
                int tersedia = 0, dipinjam = 0;
                for (int i = 0; i < jumlah_buku; i++) {
                    if (status[i] == 0) tersedia++;
                    else dipinjam++;
                }
                printf("\n--- RINGKASAN ---\n");
                printf("Total buku      : %d\n", jumlah_buku);
                printf("Tersedia        : %d\n", tersedia);
                printf("Dipinjam        : %d\n", dipinjam);
                printf("Total dikembalikan sesi ini: %d\n", total_kembali);
                printf("Sampai jumpa, Pak Hendra!\n");
                break;
            }

            default:
                printf("Pilihan tidak valid!\n");
        }

    } while (pilihan != 5);

    return 0;
}
