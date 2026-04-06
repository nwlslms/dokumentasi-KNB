#include <stdio.h>

int main () {
    int a;
    scanf("%d", &a);
    if (a == 0) {
        printf("Ini adalah bilangan 0\n");
    } else if (a % 2 == 0) {
        printf("Ini adalah bilangan genap\n");
        if(a < 0) {
            printf("Ini adalah bilangan negatif\n");
        } else {
            printf("Ini adalah bilangan positif\n");
        }
    } else if (a % 2 == 1) {
        printf("Ini adalah bilangan ganji;\n");
        if(a < 0) {
            printf("Ini adalah bilangan negatif\n");
        } else {
            printf("Ini adalah bilangan positif\n");
        }
    } else {
        printf("Undefined");
    }
    return 0;
}