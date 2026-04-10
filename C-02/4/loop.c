#include <stdio.h>

int main (){
    int a;
    printf("---Tekan Ctrl+D untuk keluar---\n");
    while(scanf("%d", &a) != EOF){
        printf("Angka yang anda tekan: %d\n", a);
    }
    return  0;
}