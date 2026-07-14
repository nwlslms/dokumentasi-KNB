#include <stdio.h>

int main () {
    int angka;
    scanf("%d", &angka);
    char text[21];
    scanf("%[^\n]", text);
    scanf("%[^.]", text);
    return 0;
}