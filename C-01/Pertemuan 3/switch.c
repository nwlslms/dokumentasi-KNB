#include <stdio.h>

int main () {
    int hari;
    int bilangan;
    scanf("%d", &hari);
    switch(hari) {
        case 0: 
            printf("Ahad\n");
            break;
        case 1:
            printf("Senin\n");
            break;
        case 2:
            printf("Selasa\n");
            break;
        default:
            printf("Typo\n");
            break;
        case 3:
            printf("Rabu\n");
            break;
    }
    return 0;
}