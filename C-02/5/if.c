#include <stdio.h>

int main () {
    //Apakah bilangan ini lebih dari 0
    int hari;
    scanf("%d", &hari);
    if (hari == 0) {
        printf("Ahad\n");
    } else if (hari == 1) {
        printf("Senin\n");
    } else if (hari == 2) {
        printf("Selasa\n");
    } else if (hari == 3) {
        printf("Rabu\n");
    } else if (hari == 4) {
        printf("Kamis\n");
    } else if (hari == 5) {
        printf("Jumat\n");
    } else if (hari == 6) {
        printf("Sabtu\n");
    } else {
        printf("TIDAK TERDEFINISI\n");
    }
    return 0;
}