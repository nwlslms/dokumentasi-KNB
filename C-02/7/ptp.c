#include <stdio.h>

int main () {
    int a = 10;
    int *ptr = &a;
    int *ptr2 = ptr;
    // int *ptr2 = &a;
    // ptr2 -> ptr -> a
    // ptr2 -> a
    printf("Nilai a: %d\nAlamat a: %p\n", a, &a);
    printf("Nilai yang ditunjuk *ptr: %d\nNilai *ptr: %p\nAlamat *ptr: %p\n", *ptr, ptr, &ptr);
    printf("Nilai yang ditunjuk *ptr2: %d\nNilai *ptr2: %p\nAlamat *ptr2: %p\n", *ptr2, ptr2, &ptr2);
    return 0;
}