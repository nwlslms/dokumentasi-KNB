#include <stdio.h>

int main () {
    int max = 10;
    int nilai[max];
    int n;
    scanf("%d", &n);
    if (n <= max) {
        for (int i = 0; i < n; i++) {
            scanf("%d", &nilai[i]);
        }
        for (int i = 0; i < max; i++) {
            printf("%d\n", nilai[i]);
        }
    } else {
        printf("Gua cuma nyediain 10 nilai\n");
    }
    return 0;
}