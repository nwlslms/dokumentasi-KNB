#include <stdio.h>
#define MAX 100

int Queue[MAX];
int front = -1, end = -1;

int isFull() {
    return (end == MAX - 1);
}

int isEmpty() {
    return (front == -1 && end == -1);
}

void enqueue(int val) {
    if (isFull()) {
        printf("Queue penuh!\n");
        return;
    }
    if (isEmpty()) {
        front = end = 0;
    } else {
        end++;
    }
    Queue[end] = val;
}

void dequeue() {
    if (isEmpty()) {
        printf("Queue kosong!\n");
        return;
    }
    printf("%d keluar dari Queue!\n", Queue[front]);
    if(front == end) {
        front = end = -1;
    } else {
        front++;
    }
}

int main () {

    return 0;
}