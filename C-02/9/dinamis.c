#include <stdlib.h>
#include <stdio.h>

int main () {
    // int n;
    // scanf("%d", &n);
    // int array[n];
    int n;
    scanf("%d", &n);
    int *array = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        // scanf("%d", &array[i]);
        scanf("%d", (array + i));
    }
    for (int i = 0; i < n; i++) {
        // printf("%d\n", array[i]);
        printf("%d\n", *(array + i));
    }
    free(array); // Bebasin semua blok memori yang dideklarasikan malloc();
    free(&array[3]);
    printf("%d\n", array[0]);
    printf("%d\n", array[3]);
    for (int i = 0; i < n; i++) {
        // printf("%d\n", array[i]);
        printf("%d ", *(array + i));
    }
    printf("\n-------------------------\n");
    for (int i = 0; i < n; i++) {
        // printf("%d\n", array[i]);
        printf("%d ", *(array + i));
    }
    printf("\n-------------------------\n");
    for (int i = 0; i < n; i++) {
        // printf("%d\n", array[i]);
        printf("%d ", *(array + i));
    }
    printf("\n-------------------------\n");
    for (int i = 0; i < n; i++) {
        // printf("%d\n", array[i]);
        printf("%d ", *(array + i));
    }
    printf("\n-------------------------\n");
    for (int i = 0; i < n; i++) {
        // printf("%d\n", array[i]);
        printf("%d ", *(array + i));
    }
    printf("\n-------------------------\n");
    return 0;
}