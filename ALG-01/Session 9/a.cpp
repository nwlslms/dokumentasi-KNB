#include <stdio.h>

int main () {
    short jam;
    int total = 5000;
    scanf("%hd", &jam);
    if (jam > 2) {
        total = total + (jam-2)*2000;
    }
    printf("%d\n", total);
    return 0;
}