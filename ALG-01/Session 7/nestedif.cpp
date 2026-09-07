#include <stdio.h>

int main () {
    int bil;
    scanf("%d", &bil);
    if (bil < 0) {
        printf("Ini bilangan negatif\n");
        if (bil % 2 == 0) {
            printf("dan bilangan genap\n");
        } else {
            printf("dan bilangan ganjil\n");
        }
    } else if (bil == 0) {
        printf("Ini bilangan 0\n");
    } else {
        printf("Ini bilangan positif\n");
        if (bil % 2 == 0) {
            printf("dan bilangan genap\n");
        } else {
            printf("dan bilangan ganjil\n");
        }
    }

    return 0;   
}