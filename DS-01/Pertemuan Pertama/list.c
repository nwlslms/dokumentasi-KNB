#include <stdio.h>
#include <stdlib.h>

int main () {
    //Array disimpan secara stack
    int arr[5];
    for (int i = 0; i < 5; i++) {
        printf("%p\n", &arr[i]);
    }
    
    //Linked List disimpan secara heap
    return 0;
}