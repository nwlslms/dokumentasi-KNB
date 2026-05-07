#include <stdio.h>
#include <stdlib.h>

int main () {
    // Alokasi memori pakai malloc()
    int n;
    scanf("%d", &n);
    int *array1 = malloc(n * sizeof(int));
    for(int i = 0; i < n; i++) {
        printf("%d ", array1[i]);
    }
    printf("\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &array1[i]);
    }
    printf("Akhir: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", array1[i]);
    }
    printf("\n");
    free(array1);

    // Alokasi memori pakai calloc()
    scanf("%d", &n);
    int *array2 = calloc(n, sizeof(int));
    printf("Awal: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", array2[i]);
    }
    for(int i = 0; i < n; i++) {
        scanf("%d", &array2[i]);
    }
    printf("Akhir: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", array2[i]);
    }
    printf("\n");

    scanf("%d", &n);
    array2 = (int*) realloc(array2, n * sizeof(int));
    printf("Setelah reallocation: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", array2[i]);
    }
    printf("\n");
    for(int i = 5; i < n; i++) {
        scanf("%d", &array2[i]);
    }
    printf("Akhir: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", array2[i]);
    }
    free(array2);
    return 0;
}