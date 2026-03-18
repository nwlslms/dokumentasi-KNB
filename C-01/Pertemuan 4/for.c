#include <stdio.h>

int main () {
    // printf("1\n2\n3\n4\n5\n");
    //10000000
    // for(int i = 0; i < 5;i++) {
    //     printf("%d\n", i+1);
    // }
    // int n;
    // printf("Masukkan total nilai: ");
    // scanf("%d", &n);
    // int total = 0;
    // for(int i = 0; i < n; i++) {
    //     int nilai;
    //     scanf("%d", &nilai);
    //     total += nilai;
    // }
    // float rata2  = (float)total / n;
    // printf("%f\n", rata2);
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n\n\n\n\n\n\n\n");
    for(int i = 0; i < n;i++) {
        for(int j = n-1; j > i; j--) {
            printf(" ");
        }
        for(int j = 0; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}