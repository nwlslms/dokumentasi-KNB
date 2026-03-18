#include <stdio.h>
#define MAX 10

int Stack[MAX];
int top = -1;

int isEmpty() {
    return (top == -1);
}

int isFull() {
    return (top == MAX -1 );
}

void enstack(int val) {
    if(isFull()) {
        printf("Stack full!\n");
    }
    if (isEmpty()) {
        top = 0;
    } else { 
        top++;
    }
    Stack[top] = val;
}

void destack() {
    if (isEmpty()) {
        printf("Stack kosong!\n");
    } else {
        printf("%d keluar dari stack!\n", Stack[top]);
        if(top == 0) {
            top = -1;
        } else {
            top--;
        }
    }
}

int main () {

    return 0;
}