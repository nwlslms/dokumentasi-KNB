#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct {
    int absen;
    int umur;
    char nama[20];
} Siswa;

int main () {
    Siswa data = {1, 17, "Nawwal"};

    Siswa *ptr = &data;
    ptr->absen = 21;
    
    Siswa **ptr2 = &ptr;
    printf("%d\n", (*ptr2)->absen);
    printf("%d\n", (**ptr2).absen);
    
    return 0;
}