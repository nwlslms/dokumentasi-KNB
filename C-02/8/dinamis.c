#include <stdio.h>
#include <stdlib.h>

int main () {
    // int max;
    // scanf("%d", &max);
    // int arr[max];
    // for (int i = 0; i < max; i++) {
    //     scanf("%d", &arr[i]);
    // }
    // for(int i = 0; i< max+3; i++) {
    //     printf("%d ", arr[i]);
    // }
    int max;
    scanf("%d", &max);
    int *array = (int*)malloc(sizeof(int) * max);
    for(int i = 0; i < max; i++) {
        scanf("%d", &array[i]);
    }
    free(array);
    return 0;
}