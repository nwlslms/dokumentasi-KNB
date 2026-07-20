#include <stdio.h>
#include <string.h>

typedef struct {
    char nama[21];
    char kampus[21];
    int lulus;
} Data;

int main () {
    FILE *fp = fopen("data.txt", "r");

    char tampung = fgetc(fp);
    for(int i = 0; tampung != '\n'; i++) {
        printf("%c", tampung);
        tampung = fgetc(fp);
    }
    printf("\n");

    freopen("data.txt", "r", fp);
    // fp = fopen("data.txt", "r");

    char buffer[100];
    fgets(buffer, sizeof(buffer), fp);
    printf("%s", buffer);

    FILE *formats = fopen("format.txt", "r");
    Data mahasiswa[2];
    fscanf(formats, "%[^;];%d;%[^\n]", mahasiswa[0].nama,  &mahasiswa[0].lulus, mahasiswa[0].kampus);
    printf("Nama: %s\nKampus: %s\nLulus: %d\n", mahasiswa[0].nama, mahasiswa[0].kampus, mahasiswa[0].lulus);

    fclose(fp);
    fclose(formats);
    return 0;
}