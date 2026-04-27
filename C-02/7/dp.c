#include <stdio.h>

int main () {
    int a = 10;
    int *ptr = &a;
    int *ptr2 = ptr;
    int *ptr3;
    int **pointer = &ptr2;
    printf("Nilai a: %d\nAlamat a: %p\n", a, &a);
    printf("Nilai yang ditunjuk *ptr: %d\nNilai *ptr: %p\nAlamat *ptr: %p\n", *ptr, ptr, &ptr);
    printf("Nilai yang ditunjuk *ptr2: %d\nNilai *ptr2: %p\nAlamat *ptr2: %p\n", *ptr2, ptr2, &ptr2);
    printf("Nilai yang ditunjuk oleh penunjuk **pointer: %d\nNilai yang ditunjuk **pointer: %p\nNilai **pointer: %p\nAlamat **pointer: %p\n", **pointer, *pointer, pointer, &pointer);

    int b = 12;
    *pointer = &b;
    printf("Nilai b: %d\nAlamat b: %p\n", b, &b);
    printf("Nilai yang ditunjuk *ptr2: %d\nNilai *ptr2: %p\nAlamat *ptr2: %p\n", *ptr2, ptr2, &ptr2);
    printf("Nilai yang ditunjuk oleh penunjuk **pointer: %d\nNilai yang ditunjuk **pointer: %p\nNilai **pointer: %p\nAlamat **pointer: %p\n", **pointer, *pointer, pointer, &pointer);
    **pointer = 20;
    printf("\nNilai b: %d\nAlamat b: %p\n", b, &b);
    printf("Nilai yang ditunjuk *ptr2: %d\nNilai *ptr2: %p\nAlamat *ptr2: %p\n", *ptr2, ptr2, &ptr2);
    printf("Nilai yang ditunjuk oleh penunjuk **pointer: %d\nNilai yang ditunjuk **pointer: %p\nNilai **pointer: %p\nAlamat **pointer: %p\n", **pointer, *pointer, pointer, &pointer);
    return 0;
}