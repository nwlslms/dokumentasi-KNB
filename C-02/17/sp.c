#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int absen;
    int umur;
    char nama[21];
} Siswa;

int main () {
    int n;
    scanf("%d", &n);
    Siswa *data = (Siswa*)malloc(sizeof(Siswa)*n);
    Siswa *ptr = data;
    for(int i = 0; i < n; i++) {
        scanf("%d %d", &(ptr+i)->absen, &(ptr+i)->umur);
        scanf(" %[^\n]", (ptr+i)->nama);
    }
    for(int i = 0; i < n; i++) {
        printf("%d %d\n", (ptr+i)->absen, ptr[i].umur);
        printf("%s\n", ptr[i].nama);
        printf("\n\n");
    }
    free(data);
    return 0;
}