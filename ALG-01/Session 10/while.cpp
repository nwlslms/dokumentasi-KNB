#include <stdio.h>

int main () {
    // 1-100 ganjil
    int i = 101;
    while(i <= 100) {
        if (i%2 == 1) {

            printf("%d\n", i);
        }
        i++;
    }
    return 0;
}