#include <stdio.h>

typedef struct {
    int absen;
} Siswa;

int main () {
    Siswa data[2];
    Siswa *ptr1 = data;
    (ptr1)->absen = 21;
    ptr1 += 1;
    (ptr1)->absen = 22;
    printf("%d", ptr1->absen);
    ptr1--;
    printf("%d", (*ptr1).absen);
}