#include <stdio.h>
#include <string.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubble(int *arr, int size) {
    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - 1 - i; j++) {
            if(arr[j] < arr[j+1]) {

            }
        }
    }
}

int main () {
    int arr[] = {7, 1, 5, 2, 4, 10, 8, 9, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);
    // 36 / 4 = 9;
    printf("\n");
    bubble(arr, n);
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);

    return 0;
}