#include <stdio.h>

int main () {
    int T;
    scanf("%d", &T);
    for(int i = 0; i < T; i++) {
        int N, X;
        scanf("%d %d", &N, &X);
        int depan = X / 2;
        int belakang = (N / 2) - (X/2);
        printf("Case #%d: %d\n", i+1, (depan <= belakang) ? depan : belakang);
    }
    return 0;
}