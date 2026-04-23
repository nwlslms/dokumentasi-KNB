#include <stdio.h>

int main () {
    int umur[12];
    for (int i = 0; i < 12; i++) {
        scanf("%d", &umur[i]);
    }
    for (int i = 0; i < 12; i++) {
        printf("%d ", umur[i]);
    }
    return 0;
}