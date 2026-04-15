#include <stdio.h>
int nilai[100];
int main () {
    int array[100];
    // for(int i = 0; i < 100;i++) {
    //     array[i] = 0;
    // }
    for(int i = 0; i < 100; i++) {
        printf("%d\n", array[i]);
    }
    int array2[] = {10, 5, 2, 3};
    int array3[100] = {6, 2, 3, 10, 9, 5};
    int data;
    scanf("%d", &data);
    if (data > 100) {
        return 0;
    } 
    int total = 0;
    // for (int i = 0; i < data; i++) {
    //     int nilai;
    //     scanf("%d", &nilai);
    //     total += nilai;
    // }
    // printf("%f", (float)total / data);

    for (int i = 0; i < data; i++) {
        scanf("%d", &nilai[i]);
    }
    for (int i = 0; i < data; i++) {
        total += nilai[i];
    }
    printf("%f", (float)total / data);
    return 0;
}