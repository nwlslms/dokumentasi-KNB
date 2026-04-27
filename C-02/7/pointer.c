#include <stdio.h>

int main () {
    int a = 10;
    printf("Nilai a: %d\nAlamat a: %p\n", a, &a);
    // int *ptr = &a;
    int *ptr;
    ptr = &a;
    printf("Nilai yang ditunjuk *ptr: %d\nNilai *ptr: %p\nAlamat *ptr: %p\n", *ptr, ptr, &ptr);

    // Ubah *ptr
    *ptr = 100;
    printf("\nSETELAH DIUBAH LEWAT *ptr\n");
    printf("Nilai yang ditunjuk *ptr: %d\nNilai *ptr: %p\nAlamat *ptr: %p\n", *ptr, ptr, &ptr);
    printf("Nilai a: %d\nAlamat a: %p\n", a, &a);

    a = 50;
    printf("\nSETELAH DIUBAH LEWAT a\n");
    printf("Nilai yang ditunjuk *ptr: %d\nNilai *ptr: %p\nAlamat *ptr: %p\n", *ptr, ptr, &ptr);
    printf("Nilai a: %d\nAlamat a: %p\n", a, &a);
    return 0;
}