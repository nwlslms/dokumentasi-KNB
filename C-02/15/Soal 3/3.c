/*
 * JAWABAN SOAL 3 — Rapor Digital Kelas Pak Budi
 * Materi: Input, Output, Data Type, If Condition, Loop, Array, Pointer, Function
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_SISWA 15
#define JUMLAH_MAPEL 3
#define BATAS_LULUS 70.0f

char nama[MAX_SISWA][50];
float nilai[MAX_SISWA][JUMLAH_MAPEL];
int jumlah_siswa = 0;

char nama_mapel[JUMLAH_MAPEL][10] = {"MTK", "B.IND", "IPA"};

void hitung_rata(float *nilai_siswa, int n, float *rata) {
    float total = 0;
    for (int i = 0; i < n; i++) {
        total += nilai_siswa[i];
    }
    *rata = total / n;
}

void input_siswa() {
    if (jumlah_siswa >= MAX_SISWA) {
        printf("Data siswa penuh! Maksimal %d siswa.\n", MAX_SISWA);
        return;
    }

    getchar();
    printf("Nama siswa  : ");
    fgets(nama[jumlah_siswa], 50, stdin);
    nama[jumlah_siswa][strcspn(nama[jumlah_siswa], "\n")] = 0;

    for (int i = 0; i < JUMLAH_MAPEL; i++) {
        float val;
        do {
            printf("Nilai %-5s : ", nama_mapel[i]);
            scanf("%f", &val);
            if (val < 0 || val > 100) {
                printf("Nilai harus antara 0 - 100. Coba lagi.\n");
            }
        } while (val < 0 || val > 100);
        nilai[jumlah_siswa][i] = val;
    }

    jumlah_siswa++;
    printf("Data berhasil disimpan!\n");
}

void tampilkan_rapor() {
    if (jumlah_siswa == 0) {
        printf("Belum ada data siswa.\n");
        return;
    }

    printf("\n%-18s | %-5s | %-5s | %-5s | %-6s | %s\n",
           "Nama", "MTK", "B.IND", "IPA", "Rata", "Status");
    printf("-------------------+-------+-------+-------+--------+----------\n");

    for (int i = 0; i < jumlah_siswa; i++) {
        float rata;
        hitung_rata(nilai[i], JUMLAH_MAPEL, &rata);
        printf("%-18s | %5.1f | %5.1f | %5.1f | %6.1f | %s\n",
               nama[i],
               nilai[i][0],
               nilai[i][1],
               nilai[i][2],
               rata,
               rata >= BATAS_LULUS ? "LULUS" : "TIDAK LULUS");
    }
}

void cari_siswa(char keyword[]) {
    int ditemukan = 0;
    char kw_lower[50];
    for (int i = 0; keyword[i]; i++) {
        kw_lower[i] = tolower(keyword[i]);
    }
    kw_lower[strlen(keyword)] = 0;

    printf("\n");
    for (int i = 0; i < jumlah_siswa; i++) {
        char nama_lower[50];
        for (int j = 0; nama[i][j]; j++) {
            nama_lower[j] = tolower(nama[i][j]);
        }
        nama_lower[strlen(nama[i])] = 0;

        if (strstr(nama_lower, kw_lower) != NULL) {
            float rata;
            hitung_rata(nilai[i], JUMLAH_MAPEL, &rata);
            printf("- %-18s | Rata-rata: %.1f | %s\n",
                   nama[i], rata,
                   rata >= BATAS_LULUS ? "LULUS" : "TIDAK LULUS");
            ditemukan++;
        }
    }

    if (ditemukan == 0) {
        printf("Tidak ada siswa dengan nama mengandung \"%s\".\n", keyword);
    } else {
        printf("Ditemukan %d siswa.\n", ditemukan);
    }
}

void statistik_kelas() {
    if (jumlah_siswa == 0) {
        printf("Belum ada data siswa.\n");
        return;
    }

    float total_kelas = 0;
    float rata_tertinggi = -1, rata_terendah = 101;
    int idx_tinggi = 0, idx_rendah = 0;
    int lulus = 0, tidak_lulus = 0;

    for (int i = 0; i < jumlah_siswa; i++) {
        float rata;
        hitung_rata(nilai[i], JUMLAH_MAPEL, &rata);
        total_kelas += rata;

        if (rata > rata_tertinggi) {
            rata_tertinggi = rata;
            idx_tinggi = i;
        }
        if (rata < rata_terendah) {
            rata_terendah = rata;
            idx_rendah = i;
        }

        if (rata >= BATAS_LULUS) lulus++;
        else tidak_lulus++;
    }

    printf("\n--- STATISTIK KELAS ---\n");
    printf("Rata-rata kelas   : %.1f\n", total_kelas / jumlah_siswa);
    printf("Nilai tertinggi   : %s (%.1f)\n", nama[idx_tinggi], rata_tertinggi);
    printf("Nilai terendah    : %s (%.1f)\n", nama[idx_rendah], rata_terendah);
    printf("Jumlah lulus      : %d siswa\n", lulus);
    printf("Jumlah tidak lulus: %d siswa\n", tidak_lulus);
}

int main() {
    int pilihan;
    char keyword[50];

    printf("=========================================\n");
    printf("   RAPOR DIGITAL KELAS PAK BUDI\n");
    printf("=========================================\n");

    do {
        printf("\n1. Input Data Siswa\n");
        printf("2. Tampilkan Rapor Semua Siswa\n");
        printf("3. Cari Siswa\n");
        printf("4. Statistik Kelas\n");
        printf("5. Keluar\n");
        printf("Pilih menu: ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1:
                input_siswa();
                break;

            case 2:
                tampilkan_rapor();
                break;

            case 3:
                if (jumlah_siswa == 0) {
                    printf("Belum ada data siswa.\n");
                    break;
                }
                getchar();
                printf("Cari nama: ");
                fgets(keyword, 50, stdin);
                keyword[strcspn(keyword, "\n")] = 0;
                cari_siswa(keyword);
                break;

            case 4:
                statistik_kelas();
                break;

            case 5:
                printf("\nTotal siswa diinput: %d\n", jumlah_siswa);
                printf("Terima kasih, Pak Budi! Semoga murid-muridnya sukses.\n");
                break;

            default:
                printf("Pilihan tidak valid!\n");
        }

    } while (pilihan != 5);

    return 0;
}
