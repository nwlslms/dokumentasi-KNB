#include <stdio.h>

long long int faktorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * faktorial(n - 1);
}

int main () {
    printf("%lld", faktorial(10));
    return 0;
}