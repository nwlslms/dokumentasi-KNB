#include <stdio.h>

int main () {
    // int data[] = {1, 10, 5, 7, 3};
    // for(int i = 0; i < 5; i++) {
    //     printf("%d | %p\n", data[i], &data[i]);
    // }
    // printf("\n%p", data);
    // printf("\n%d\n", *data);
    // int *ptr1 = data;
    // for (int i = 0; i < 5; i++) {
    //     printf("%d | %p\n", ptr1[i], &ptr1[i]);
    // }
    int data[] = {10, 5, 6, 7, 1};
    int *ptr1 = data;
    //int *ptr1 = &data[0];
    //i = byte data * i
    for(int i = 0; i < 5; i++) {
        printf("%d || %p\n", *(ptr1 + i), (ptr1 + i));
    }
    for(int i = 0; i < 5; i++) {
        printf("%d || %p\n", *(data + i), (data + i));
    }
    return 0;
}