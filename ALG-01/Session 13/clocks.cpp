#include <stdio.h>

int main (){
    short T;
    scanf("%hd", &T);
    for(int i = 0; i < T; i++) {
        short A;
        long long B;
        scanf("%hd %lld", &A, &B);
        long long hasil = A * B;
        float rotasi = hasil / 360.0;
        printf("%.2f\n", rotasi)
    }
    return 0;
}