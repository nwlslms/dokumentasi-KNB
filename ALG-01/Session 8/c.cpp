#include <stdio.h>

int main () {
    float ipk;
    int penghasilan;
    scanf("%f", &ipk);
    scanf("%d", &penghasilan);
    // IPK >= 3.5 DAN penghasilan <= 5000000
    if (ipk >= 3.5 && penghasilan <= 5000000) {
        printf("LOLOS\n");
    } else {
        printf("TIDAK LOLOS\n");
    }
    return 0;
}