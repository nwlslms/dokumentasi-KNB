#include <stdio.h>

typedef struct {
    int bilangan;
    char kar;
} Baru;

int main () {
    Baru arr[5];
    Baru *ptr = arr;
    for(int i = 0; i < 5; i++) {
        scanf("%d", &(arr+i)->bilangan);
    }
    for(int i = 0; i < 5; i++) {
        printf("%d ", (ptr+i)->bilangan);
    }
    return 0;
}