#include <stdio.h>
#include <stdlib.h>

int main () {
    int n;
    printf("Jumlah nilai yang mau ditampung: ");
    scanf("%d", &n);
    float *array = (float*)calloc(n, sizeof(float));
    int nSekarang = 0;
    while(1) {
        if(nSekarang == n) {
            array = (float*)realloc(array, (n + 5));
            n = n + 5;
        }
        float data;
        if(nSekarang == 0) {
            printf("Belum ada nilai!\n");
        } else {
            printf("Nilai: ");
            for(int i = 0; i < nSekarang; i++) {
                printf("%f ", array[i]);
            }
            printf("\n");
        }
        printf("Masukkan nilai (%d/%d | -1 Untuk Keluar): ", nSekarang, n);
        scanf("%f", &data);
        if (data < 0) {
            break;
        }
        array[nSekarang] = data;
        nSekarang++;
    }
    printf("PROGRAM BERHENTI\n");
    return 0;
}