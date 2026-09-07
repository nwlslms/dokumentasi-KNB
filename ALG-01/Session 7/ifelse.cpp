#include <stdio.h>

int main () {
    int bil;
    scanf("%d", &bil);
    if (bil < 0) {
        printf("Ini bilangan negatif!\n");
    } else {
        printf("Ini bilangan positif\n");
    }
    return 0;   
}