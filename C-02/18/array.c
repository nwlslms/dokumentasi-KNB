#include <stdio.h>
#include <stdlib.h>

int main () {
    int *arr = (int*)malloc(sizeof(int)*5);

    // Akses Index ke 2
    // 0, 1, 2, ...
    *(arr + 2) = 10;
    arr[2] = 12;
    free(arr);
    return 0;
}