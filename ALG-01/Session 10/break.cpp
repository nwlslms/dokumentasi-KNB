#include <stdio.h>

int main () {
    for(int i = 0; i < 1000; i++) {
        if (i == 233) {
            break;
        }
        printf("%d\n", i);
    }
    return 0;
}