#include <stdio.h>
#include <stdio.h>

int main () {
    system("CLS");
    printf("KALKULATOR SEDERHANA\n");
    printf("====================\n");
    printf("1. Aritmatika\n2. Relasional (Komparasi)\n3. Bitwise\n4. Tabel Logika\n>> ");
    int pil;
    scanf("%d", &pil);
    if(pil == 1) {

    } else if (pil == 2) {

    } else if (pil == 3) {

    } else if (pil == 4) {
        system("CLS");
        printf("TABEL LOGIKA\n");
        printf("============\n");
        printf("1. OR\n2. AND\n3. NOT\n>> ");
        int logika;
        scanf("%d", &logika);
        if(logika == 1) {

        } else if (logika == 2) {
            printf("%d && %d = %d\n", 1, 1, 1 && 1);
            printf("%d && %d = %d\n", 1, 0, 1 && 0);
            printf("%d && %d = %d\n", 0, 1, 0 && 1);
            printf("%d && %d = %d\n", 0, 0, 0 && 0);
            system("PAUSE");
        } else if (logika == 3) {

        } else {

        }
    } else {

    }
    //switch
    return 0;
}