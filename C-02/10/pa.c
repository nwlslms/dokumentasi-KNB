#include <stdio.h>

int main () {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for(int i = 0; i < 10; i++) {
        printf("%d %p\n", arr[i], &arr[i]);
    }
    printf("%d %p %p\n", *arr, arr, &arr);
    int a = 10;
    int *ptr = &a;
    printf("%d %p %p\n", *ptr, ptr, &ptr);
    printf("%d %p\n", ptr[0], &ptr[0]);
    return 0;
}