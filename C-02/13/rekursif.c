#include <stdio.h>

long long int faktorial (int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * faktorial(n-1);
}

int pangkat(int x, int e) {
    if (e == 0) {
        return 1;
    }
    return x * pangkat(x, e-1);
}

int main () {
    printf("%lld", faktorial(6));
}