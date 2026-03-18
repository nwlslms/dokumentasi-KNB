#include <stdio.h>
#include <stdlib.h>

int main () {
    printf("==================\nKalkulator Sederhana\n==================\n");
    printf("Masukkan a: ");
    float a, b;
    scanf("%f", &a);
    printf("Masukkan b: ");
    scanf("%f", &b);
    printf("Hasil:\n\n");
    printf("Kalkulator Aritmatika\n==================\n");
    printf("%.2f + %.2f = %.2f\n", a, b, a + b);
    printf("%.2f - %.2f = %.2f\n", a, b, a - b);
    printf("%.2f * %.2f = %.2f\n", a, b, a * b);
    printf("%.2f / %.2f = %.2f\n", a, b, a / b);
    printf("%.2f %% %.2f = %.0f\n", a, b, (int)a % (int)b);

    printf("\n\n\nKalkulator Perbandingan\n==================\n");
    printf("%.2f > %.2f = %d\n", a, b, a > b);
    printf("%.2f >= %.2f = %d\n", a, b, a >= b);
    printf("%.2f < %.2f = %d\n", a, b, a < b);
    printf("%.2f <= %.2f = %d\n", a, b, a <= b);
    printf("%.2f == %.2f = %d\n", a, b, a == b);
    printf("%.2f != %.2f = %d\n", a, b, a != b);

    printf("\n\n\nKalkulator Logika\n==================\n");
    printf("OR\n");
    printf("1 || 1 = %d\n", 1 || 1);
    printf("1 || 0 = %d\n", 1 || 0);
    printf("0 || 1 = %d\n", 0 || 1);
    printf("0 || 0 = %d\n", 0 || 0);
    printf("AND\n");
    printf("1 && 1 = %d\n", 1 && 1);
    printf("1 && 0 = %d\n", 1 && 0);
    printf("0 && 1 = %d\n", 0 && 1);
    printf("0 && 0 = %d\n", 0 && 0);
    printf("NOT\n");
    printf("!1 = %d\n", !1);
    printf("!0 = %d\n", !0);

    printf("\n\n\nBitwise\n==================\n");
    printf("%d & %d = %d\n", (int)a, (int)b, (int)a & (int)b);
    printf("%d | %d = %d\n", (int)a, (int)b, (int)a | (int)b);
    printf("%d ^ %d = %d\n", (int)a, (int)b, (int)a ^ (int)b);
    printf("~%d = %d\n", (int) a, ~(int) a);
    printf("~%d = %d\n", (int) b, ~(int) b);
    int geser;
    printf("Masukkan total pergeseran: ");
    scanf("%d", &geser);
    printf("%d << %d = %d\n", (int )a, geser, (int) a << geser);
    printf("%d >> %d = %d\n", (int )a, geser, (int) a >> geser);
    printf("%d << %d = %d\n", (int )b, geser, (int) b << geser);
    printf("%d >> %d = %d\n", (int )b, geser, (int) b >> geser);

    return 0;
}
