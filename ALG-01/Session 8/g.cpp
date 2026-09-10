#include <stdio.h>

int main () {
    short tahun;
    scanf("%hd", &tahun);

    if (tahun % 100 == 0) {
        if (tahun % 400 == 0) {
            printf("KABISAT ABAD\n");
        } else {
            printf("BUKAN KABISAT\n");
        }
    } else if (tahun % 4 == 0) {
        printf("KABISAT\n");
    } else {
        printf("BUKAN KABISAT\n");
    }
    return 0;   
}