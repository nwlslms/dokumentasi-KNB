#include <stdio.h>


int main () {
    int nilai[100];
    // int nilai[100] = {100, 6, 2, 3}; // 0, 0, 0, 0, 0
    // int nilai[] = {5, 10, 9, 6, 3, 7};
    // for(int i = 0; i < 10; i++) {
    //     scanf("%d", &nilai[i]);
    // }
    char kata[] = "Kalimat";
    for(int i = 0; kata[i] != '\0'; i++) {
        printf("%c\n", kata[i]);
    }
    return 0;
}