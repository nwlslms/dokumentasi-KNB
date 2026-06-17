#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int umur, absen;
    char nama[21];
} Siswa;

int main () {
    Siswa *data = (Siswa*)malloc(sizeof(Siswa)*3);
    Siswa *ptr1 = data;
    Siswa **ptr2 = &ptr1;

    for(int i = 0; i < 3; i++) {
        scanf("%d %d", &(ptr1+i)->absen, &ptr1[i].umur);
        scanf(" %[^\n]", (ptr1+i)->nama);
    }

    for(int i = 0; i < 3; i++) {
        printf("%d %d\n", (*ptr2)[i].absen, (**ptr2).umur);
        printf("%s\n", (*(ptr2)+i)->nama);
    }
    return 0;
}