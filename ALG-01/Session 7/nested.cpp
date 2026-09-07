#include <stdio.h>

int main () {
    int ruangan1 = 0, ruangan2 = 0, ruangan3 = 0;
    char cmd;
    scanf(" %c", &cmd);
    switch(cmd) {
        case '1':
            if (ruangan1 == 0) {
                printf("Ruangan 1 nyala!\n");
                ruangan1 = 1;
            } else {
                printf("Ruangan 1 mati!\n");
                ruangan1 = 0;
            }
            break;
        case '2':
            if (ruangan2 == 0) {
                printf("Ruangan 2 nyala!\n");
                ruangan2 = 1;
            } else {
                printf("Ruangan 2 mati!\n");
            }
            break;
        case '3':
            if (ruangan3 == 0) {
                printf("Ruangan 3 nyala!\n");
                ruangan3 = 1;
            } else {
                printf("Ruangan 3 mati!\n");
                ruangan3 = 0;
            }
            break;
        default:
            printf("Masukkan ruangan yang benar!\n");
            break;
    }

    scanf(" %c", &cmd);
    switch(cmd) {
        case '1':
            if (ruangan1 == 0) {
                printf("Ruangan 1 nyala!\n");
                ruangan1 = 1;
            } else {
                printf("Ruangan 1 mati!\n");
                ruangan1 = 0;
            }
            break;
        case '2':
            if (ruangan2 == 0) {
                printf("Ruangan 2 nyala!\n");
                ruangan2 = 1;
            } else {
                printf("Ruangan 2 mati!\n");
            }
            break;
        case '3':
            if (ruangan3 == 0) {
                printf("Ruangan 3 nyala!\n");
                ruangan3 = 1;
            } else {
                printf("Ruangan 3 mati!\n");
                ruangan3 = 0;
            }
            break;
        default:
            printf("Masukkan ruangan yang benar!\n");
            break;
    }

    scanf(" %c", &cmd);
    switch(cmd) {
        case '1':
            if (ruangan1 == 0) {
                printf("Ruangan 1 nyala!\n");
                ruangan1 = 1;
            } else {
                printf("Ruangan 1 mati!\n");
                ruangan1 = 0;
            }
            break;
        case '2':
            if (ruangan2 == 0) {
                printf("Ruangan 2 nyala!\n");
                ruangan2 = 1;
            } else {
                printf("Ruangan 2 mati!\n");
            }
            break;
        case '3':
            if (ruangan3 == 0) {
                printf("Ruangan 3 nyala!\n");
                ruangan3 = 1;
            } else {
                printf("Ruangan 3 mati!\n");
                ruangan3 = 0;
            }
            break;
        default:
            printf("Masukkan ruangan yang benar!\n");
            break;
    }
    return 0;
}