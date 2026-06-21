#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int umur;
    int absen;
} Siswa;

int main () {
    // Double pointer -> pointer -> variabel
    Siswa data1;
    Siswa *ptr1 = &data1;
    Siswa **ptr2 = &ptr1;

    // Ngubah / akses alamat yang disimpan di ptr1
    Siswa data2;
    *ptr2 = &data2;
    /*
        int a = 12;
        int b = 10;
        int *ptr1 = &a;
        int **ptr2 = &ptr1;
        *ptr1 = &b;

        **ptr2 = a;
        *ptr2 = ptr1 = &a;
    */

    // Akses / ngubah nilai yang ditunjuk ptr1
    (**ptr2).umur = 18;
    (*ptr2)->umur = 18;

    //Double Pointer -> pointer -> Array
    Siswa array[5];
    Siswa *ptr1 = &array[0];
    Siswa **ptr2 = &ptr1;

    // Akses indeks ke - 2
    (*ptr2)[2].absen = 12;
    (*(ptr2)+2)->absen = 12;
    return 0;
}