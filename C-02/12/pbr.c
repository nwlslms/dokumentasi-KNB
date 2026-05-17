#include <stdio.h>
int total_siswa = 0;

void swap(int *satu, int *dua) {
    int temp = *satu;
    *satu = *dua;
    *dua = temp;
    printf("Di dalam fungsi: %d %d\n", *satu, *dua);
}

void tambah_siswa() {
    total_siswa++;
}



int main () {
    int a = 10, b = 12;
    printf("%d %d\n", a, b);
    swap(&a, &b);
    // int *satu = &a;
    // int *dua = &b;
    printf("%d %d\n", a, b);
    return 0;
}