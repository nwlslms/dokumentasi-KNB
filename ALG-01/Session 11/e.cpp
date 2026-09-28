#include <stdio.h>

int main () {
    short T, a, b, c, d, e, f;
    scanf("%hd", &T);
    for(int i = 0; i < T; i++) {
        scanf("%hd %hd %hd %hd %hd %hd", &a, &b, &c, &d, &e, &f);
        printf("Case #%d: ", i+1);
        for(int i = 0; i < a; i++) {
            printf("a");
        }
        for(int i = 0; i < b; i++) {
            printf("s");
        }
        for(int i = 0; i < c; i++) {
            printf("h");
        }
        for(int i = 0; i < d; i++) {
            printf("i");
        }
        for(int i = 0; i < e; i++) {
            printf("a");
        }
        for(int i = 0; i < f; i++) {
            printf("p");
        }
        printf("\n");
    }
    return 0;
}