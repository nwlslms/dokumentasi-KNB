#include <stdio.h>

int main () {
    int n;
    scanf("%d", &n);
    int i = 0;
    int total = 0;
    while (i < n) {
        int data;
        scanf("%d", &data);
        total += data;
    }
    float rata = (float)total / n;
    printf("%f", rata);
    return 0;
}