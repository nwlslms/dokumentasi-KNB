#include <stdio.h>

int main () {
    int a = 10;
    printf("%+d\n", a);

    printf("%-20d\n", a);
    printf("%20d\n\n", a);

    char kata[] = "Anjay";
    printf("%+20s\n", kata);
    printf("%-20s\n", kata);
    printf("%+3s\n", kata);
    printf("%.2s\n", kata);

    float randomm = 1.2345678;
    printf("%.2f", randomm);
    return 0;
}