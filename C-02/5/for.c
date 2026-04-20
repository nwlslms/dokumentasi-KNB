#include <stdio.h>

int main () {
    int n;
    scanf("%d", &n);
    /*
        n = 10
        0 < 10
        0, 1, 2, 3, 4, 5, 6, 7, 8, 9 = 10 kali iterasi
    */
    int total = 0;
    for (int i = 0; i < n; i++) {
        int nilai;
        scanf("%d", &nilai);
        total += nilai;
    }
    float rata = (float)total / n;
    printf("%f", rata);
    return 0;
}