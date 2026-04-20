#include <stdio.h>

int main () {
    for (int i = 0; i <= 100; i++){
        if (i % 2 == 0) {
            continue;
        } else if (i == 82) {
            break;
        }
        printf("%d ", i);
    }
    return 0;
}