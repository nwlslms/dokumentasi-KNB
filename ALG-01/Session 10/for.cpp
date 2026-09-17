#include <stdio.h>

int main () {
    // Ngeprint nilai ganjil 1-100
    for(int i = 1; i <= 100; i++) {
        if(i % 2 == 1) {
            printf("%d\n", i);
        }
    }

    for(int i = 1; i <= 100; printf("%d\n", i++)) {
    }
    return 0;
}