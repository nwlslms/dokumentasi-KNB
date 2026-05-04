#include <stdio.h>

int main () {
    int array[5] = {1, 2, 3, 4 , 5};
    for(int i = 0; i < 5; i++) {
        printf("%d %p\n", array[i], &array[i]); // Indexing
    }
    printf("%d %p\n", *array, array);
    int *pointer;
    pointer = &array[0];
    printf("%d %p\n", pointer[0], &pointer[0]);
    printf("----------------------\n");
    for(int i = 0; i < 5;i ++) {
        printf("%d %p\n", pointer[i], &pointer[i]);
    }
    return 0;
}