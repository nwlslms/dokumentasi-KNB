#include <stdio.h>

int main () {
    int a = 10;
    int b = 12;

    int *ptr = &a;
    printf("a: %p\nptr: %p\n\n", &a, ptr);
    printf("a: %d\n*ptr = %d\n\n", a, *ptr);
    
    int arr[] = {1, 2, 3, 4, 5};
    printf("arr: %p", arr);
    printf("\n&arr: %p", &arr);
    printf("\n&arr[0]: %p\n\n", &arr[0]);

    printf("*arr: %d\n", *arr);
    printf("arr[0]: %d\n", arr[0]);
    printf("ptr[0]: %d", ptr[0]);

    int array[10];
    for(int i = 0; i < 10; i++) {
        scanf("%d", &array[i]);
    }
    int *ptrA = arr; // &arr || &arr[0];
    ptrA[3];
}   