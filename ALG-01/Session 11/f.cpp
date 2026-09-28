#include <stdio.h>

int main () {
    short T;
    scanf("%hd", &T);
    for(int i = 0; i < T; i++) {
        short baris;
        scanf("%hd", &baris);
        for(int j = 1; j <= baris; j++) {
            for(int spasi = 0; spasi < baris - j; spasi++) {
                printf(" ");
            }
            for(int bintang = 0; bintang < 2 * j - 1; bintang++) {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}