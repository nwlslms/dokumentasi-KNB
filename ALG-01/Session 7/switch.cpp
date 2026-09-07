#include <stdio.h>

int main () {
    /*
    |0|0|0|0|0|0|
    */
    char cmd;
    scanf("%c", &cmd);
    switch(cmd) {
        case '1':
            printf("Kamar 1 Nyala!\n");
            break;
        case '2':
            printf("Kamar 2 Nyala!\n");
            break;
        case '3':
            printf("Kamar 3 Nyala!\n");
            break;
        default:
            printf("Masukkan urutan kamar yang benar!\n");
            break;
    }
    return 0;
}