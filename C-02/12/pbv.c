#include <stdio.h>

int tambah (int a, int b) {
    return a + b;
}

/*
penampung = a;
a = b;
b = penampung;
*/

void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("Di dalam fungsi: %d %d\n", a, b);
}

int main () {
    int a = 10, b = 12;
    printf("%d %d\n", a, b);
    printf("%d\n", tambah(a, b));
    //printf("%d\n", tambah(12, 30));
    //
    int temp = a;
    a = b;
    b = temp;
    printf("%d %d\n", a, b);
    swap(a, b);
    printf("%d %d\n", a, b);
    return 0;
}