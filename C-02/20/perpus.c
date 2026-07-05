#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 10

typedef struct {
    char buku[50], pengarang[50];
    int status;
} List;

List daftar[MAX];
int jumlah = 0;

void tambah_buku(char *judul, char *pengarang) {
    strcpy(daftar[jumlah].buku, judul);
    strcpy(daftar[jumlah].pengarang, pengarang);
    daftar[jumlah].status = 1;
    printf("Buku berhasil ditambahkan!\n");
    jumlah++;
}

void tambah() {
    printf("Judul buku\t: ");
    char judul[50], pengarang[50];
    scanf(" %[^\n]", judul);
    printf("Pengarang\t: ");
    scanf(" %[^\n]", pengarang);
    tambah_buku(judul, pengarang);
    system("PAUSE");

}

void showAll() {
    if (jumlah == 0) {
        printf("Koleksi masih kosong.\n");
        system("PAUSE");
        return;
    }
    printf("%-3s|%-20s|%-30s|%-10s\n", "No", "Judul", "Pengarang", "Status");
    printf("---|--------------------|------------------------------|----------\n");
    for(int i = 0; i < jumlah; i++) {
        printf("%-3d|%-20s|%-30s|", i+1, daftar[i].buku, daftar[i].pengarang);
        if (daftar[i].status == 1) {
            printf("%-10s\n", "Tersedia");
        } else {
            printf("%-10s\n", "Tidak tersedia");
        }
    }
    system("PAUSE");
}

void pinjam() {
    if (jumlah == 0) {
        printf("Koleksi masih kosong.\n");
        system("PAUSE");
        return;
    }
    printf("Masukkan nomor buku yang ingin dipinjam: ");
    int pinjam;
    scanf("%d", &pinjam);
    if(daftar[pinjam-1].status == 1) {
        printf("Buku \"%s\" berhasil dipinjam!\n",daftar[pinjam-1].buku);
        daftar[pinjam-1].status = 0;
    } else {
        printf("Maaf, buku tersebut sedang dipinjam.\n");
    }
    system("PAUSE");
}

void balikin() {
    if (jumlah == 0) {
        printf("Koleksi masih kosong.\n");
        system("PAUSE");
        return;
    }
    printf("Masukkan buku yang ingin dikembalikan: ");
    int balikan;
    scanf("%d", &balikan);
    if (daftar[balikan-1].status == 0) {
        printf("Buku \"%s\" berhasil dikembalikan!\n", daftar[balikan-1].buku);
        daftar[balikan-1].status = 1;
    } else {
        printf("Buku sudah ada di dalam rak!\n");
    }
    system("PAUSE");
}

void menu() {
    while (1) {
        system("cls");
        printf("===== PERPUSTAKAAN PAK HENDRA =====\n");
        printf("1. Tambah Buku\n2. Tampilkan Semua Buku\n3. Pinjam Buku\n4. Kembalikan Buku\n5. Keluar\nPilihan menu: ");
        int cmd;
        scanf("%d", &cmd);
        switch(cmd) {
            case 1:
                tambah();
                break;
            case 2:
                showAll();
                break;
            case 3:
                pinjam();
                break;
            case 4:
                balikin();
            break;
            case 5:
                return;
                break;
            default:
                printf("Tidak sesuai!\n");
                system("PAUSE");
                break;
        }
    }
}

int main () {
    menu();
    return 0;
}