#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Mahasiswa {
    char name[51];
    float ipk;
};

typedef struct {
    char name[51];
    float ipk;
} Siswa;

int main () {
    // // malloc, free
    // int *temp = (int*)malloc(sizeof(int));
    // //sblbalbl
    // free(temp);

    Siswa mahasiswa;
    mahasiswa.ipk = 3.14;
    strcpy(mahasiswa.name, "Yanto");
    printf("%f\n%s\n", mahasiswa.ipk, mahasiswa.name);

    // Dinamis
    Siswa *murid = (Siswa*)malloc(sizeof(Siswa));
    murid->ipk = 4;
    strcpy(murid->name, "Ahmad");
    // Siswa *murids = (Siswa*)malloc(sizeof(Siswa) * 4); PR


    return 0;
}

// int main () {
//     int a = 10;
//     int *ptr = &a;
//     // ptr = &a;
//     printf("Nilai a: %d\n", a);
//     printf("Alamat a: %p\n", &a);
//     printf("Nilai *ptr: %d\n", *ptr);
//     printf("Alamat *ptr: %p\n", ptr);
//     int *ptr2 = ptr;
//     printf("Nilai *ptr2: %d\n", *ptr2);
//     printf("Alamat *ptr2: %p\n", ptr2);

//     //Double Pointer Pointer to pointer
//     int **ptr3 = &ptr2;
//     printf("Nilai **ptr3: %d\n", **ptr3);
//     printf("Alamat **ptr3: %p\n", *ptr3);
//     return 0;
// }
