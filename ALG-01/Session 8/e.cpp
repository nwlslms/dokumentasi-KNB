#include <stdio.h>

int main () {
    short tugas, quiz, uas;
    scanf("%hd %hd %hd", &tugas, &quiz, &uas);

    float hasil = (tugas * 0.2) + (quiz * 0.3) + (uas * 0.5);
    
    if (hasil >= 85) {
        printf("A\n");
    } else if (hasil >= 70) {
        printf("B\n");
    } else if (hasil >= 55) {
        printf("C\n");
    } else if (hasil >= 40) {
        printf("D\n");
    } else {
        printf("E\n");
    }

    return 0;
}