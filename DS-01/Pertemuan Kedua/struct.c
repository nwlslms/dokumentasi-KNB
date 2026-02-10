#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[21];
} Siswa;

int main () {
    if (1) {

    }
    if (0) {
        
    }
    Siswa *budi = (Siswa*)malloc(sizeof(Siswa));
    strcpy(budi->name, "Budi");
    printf("%s\n", budi->name);
    Siswa *siswas = (Siswa*)malloc(sizeof(Siswa) * 3);
    Siswa joko;
    siswas[0] = joko;
    return 0;
}