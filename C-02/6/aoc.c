#include <stdio.h>

int main () {
    char kata[6] = "Anjay";
    // for (deklarasi; batasan; eksekusi)
    for (int i = 0; kata[i] != '\0'; i++) {
        printf("%c\n", kata[i]);
    }
    return 0;
}