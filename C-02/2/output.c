#include <stdio.h>

int main () {
    short umur = 20;
    int ukt = 6000000;
    long harga = 200000;
    long long faktorial = 45266345623453;
    float phi = 3.14;
    double derajat = 128.34563;
    long double derajatRudal = 45.2345234;
    char jawaban = 'y';
    char yapping[] = "Aku sedang belajar bahasa C";
    printf("Umur\t\t: %30hd\n", umur);
    printf("UKT\t\t: %30d\n", ukt);
    printf("Harga\t\t: %30ld\n", harga);
    printf("Faktorial\t: %30.25lld\n", faktorial);
    printf("Phi\t\t: %30.2f\n", phi);
    printf("Derajat\t\t: %30.2lf\n", derajat);
    printf("Derajat Rudal\t: %30.8Lf\n", derajatRudal);
    printf("Jawaban\t\t: %30c\n", jawaban);
    printf("Yapping\t\t: %30s\n", yapping);

    //Character Sequence
    return 0;
}