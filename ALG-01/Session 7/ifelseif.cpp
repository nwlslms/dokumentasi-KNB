#include <stdio.h>

int main () {
    int bil;
    scanf("%d", &bil);
    if (bil < 0) {
        printf("Ini bilangan negatif!\n");
    } else if (bil == 0) {
        printf("Ini bilangan 0\n");
    } else if (bil > 0){
        printf("Ini bilangan positif\n");
    } else {
        
    }
    return 0;
}