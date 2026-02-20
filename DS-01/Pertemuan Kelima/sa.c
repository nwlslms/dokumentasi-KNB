#include <stdio.h>
#define MAX 5

int Stack[MAX];
int top = -1;

int isEmpty() {
    return top == -1;
}

int isFull() {
    return top == MAX - 1;
}

void display() {
    if(isEmpty()) {
        printf("stack kosong!\n");
        return;
    }
    printf("Isi stack:\n");
    for (int i = top; i >= 0; i--) {
        printf("%d\n", Stack[i]);
    }
}

void enstack(int val) {
    if(isFull()) {
        printf("Stack penuh!\n");
        return;
    }
    if(isEmpty()) {
        top = 0;
    } else {
        top++;
    }
    Stack[top] = val;
    display();
}

void destack() {
    if(isEmpty()) {
        printf("Stack kosong!\n");
        return;
    }
    printf("%d keluar dari Stack!\n", Stack[top]);
    if(top == 0) {
        top = -1;
    } else {
        top--;
    }

}

int main () {
    display();
    enstack(10);
    enstack(2);
    enstack(12);
    enstack(5);
    enstack(14);
    enstack(3);
    destack();
    display();
    destack();
    display();destack();
    display();destack();
    display();destack();
    display();destack();
    display();
    return 0;
}