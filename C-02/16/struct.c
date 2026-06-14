#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// NYIMPEN 5 BIODATA SISWA

typedef struct {
    int absen;
    int umur;
    char nama[21];
} Siswa;


int main () {
    int n;
    scanf("%d", &n);
    Siswa *dataSiswa = (Siswa*)malloc(sizeof(Siswa)*n);
    for(int i = 0; i < n; i++) {
        printf("Masukkan nama siswa: ");
        scanf(" %[^\n]", dataSiswa[i].nama);
        printf("Masukkan absen siswa: ");
        scanf("%d", &dataSiswa[i].absen);
        printf("Masukkan umur siswa: ");
        scanf("%d", &dataSiswa[i].umur);
    }

    for(int i = 0; i < n; i++) {
        printf("Nama\t\tAbsen\tUmur\n");
        printf("%s\t\t%d\t%d\n", dataSiswa[i].nama, dataSiswa[i].absen, dataSiswa[i].umur);
    }

    free(dataSiswa);
    return 0;
}