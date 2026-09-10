#include <stdio.h>

int main () {
    short A, B, C;
    scanf("%hd %hd %hd", &A, &B, &C);
    // Apakah semuanya sama?
    if ((A == B) && (A == C)) {
        printf("SEGITIGA SAMA SISI\n");
    }
    // Apakah A dan B yang sama?
    else if (A == B) {
        printf("SEGITIGA SAMA KAKI\n");
    } else {
        printf("SEGITIGA SEMBARANG\n");
    }
    // Apakah semuanya berbeda
    return 0;
}