#include <stdio.h>

int main () {
    int n;
    scanf("%d", &n);
    switch(n) {
        case 1:
            printf("Senin\n");
            break;
        case 2:
            printf("Selasa\n");
            break;
        default:
            printf("TIDAK TERDEFINISI\n");
            break;
    }
    return 0;
}