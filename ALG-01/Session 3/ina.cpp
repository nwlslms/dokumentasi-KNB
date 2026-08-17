#include <stdio.h>

int main () {
    int jam, menit, detik;
    // scanf("%d", &jam);
    // printf(":");
    // scanf("%d", &menit);
    // printf(":");
    // scanf("%d", &detik);
    // scanf("%d;%d;%d", &jam, &menit, &detik);
    // printf("%d:%d:%d", jam, menit, detik);

    // char & string
    char karakter;
    scanf(" %c", &karakter);
    printf("%c\n", karakter);

    // getchar();
    scanf(" %c", &karakter);
    printf("%c\n", karakter);

    // string
    char kata[8]; // \0
    
    // scanf(" %s", kata); // 1 Kata
    scanf(" %[^\n]", kata);
    printf("%s", kata);
    printf("\n%s\n", kata);
    return 0;
}