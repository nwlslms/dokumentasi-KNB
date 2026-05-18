#include <stdio.h>

int tambah(int , int);
int kurang(int, int);
int kali(int ,int);
int main();

int main () {
    int a, b;
    printf("Hello World\n");
    scanf("%d %d", &a, &b);
    printf("%d + %d = %d\n%d - %d = %d\n%d * %d =  %d\n", a, b, tambah(a, b), a, b, kurang(a, b), a, b, kali(a, b));
    return 0;
}

int tambah(int a, int b) {
    return a + b;
}

int kurang(int a, int b) {
    return a - b;
}

int kali (int a, int b) {
    return a * b;
}