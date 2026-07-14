#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    char c;
    FILE *fp = fopen("data.txt", "r");
    // ;
    // Nama;Jurusan;Fakultas;Umur
    char nama[21];
    char jurusan[31], fakultas[31];
    int umur;
    fscanf(fp, "%[^;];%[^;];%[^;];%d", nama, jurusan, fakultas, &umur);
    printf("Nama: %s\nJurusan: %s\nFakultas: %s\nUmur: %d\n", nama, jurusan, fakultas, umur);
    int angka1, angka2;
    float angka3;
    fscanf(fp, "%d;%f;%d", &angka1,&angka3, &angka2);
    printf("\n%d;%f;%d", angka1, angka3, angka2);
    fclose(fp);
    return 0;  
}