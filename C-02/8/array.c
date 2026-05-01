#include <stdio.h>

int main () {
    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5;i++) {
        printf("%d %p\n", arr[i], &arr[i]);
    }
    printf("==============================\n");
    for (int i = 0; i < 5; i++) {
        printf("%d %p\n", *(arr+i), (arr+i));
    }
    printf("%d %p\n", *arr, arr);

    int a = 10;
    int *ptr1 = &a;
    printf("%d %p\n", ptr1[0], ptr1);

    return 0;
}