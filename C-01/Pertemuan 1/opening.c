//Include Header File
#include <stdio.h>

//Fungsi dan struct


//Fungsi main = Fungsi yang pertama kali dijalankan
int main () {
    printf("Hello, Ridwan\n");
    printf("Berapa umur kamu: ");
    int umur;
    int subuh, zuhur, ashar, maghrib, isya;
    scanf("%d", &umur);
    printf("%d\n", umur);
    printf("Tuliskan jumlah rakaat salat: ");
    scanf("%d %d %d %d %d", &subuh, &zuhur, &ashar, &maghrib, &isya);
    printf("%d %d %d %d %d\n", subuh, zuhur, ashar, maghrib, isya);
    return 0;
}
