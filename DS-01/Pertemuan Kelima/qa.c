#include <stdio.h>
#define MAX 5

int front = -1, rear = -1;

int Queue[MAX];

int isFull() {
    return (rear == MAX - 1);
}

int isEmpty() {
    return (front == -1 && rear == -1);
}

void enqueue(int val) {
    if(isFull()) {
        printf("Queue penuh!\n");
        return;
    }
    if(isEmpty()) {
        rear = front = 0;
    } else {
        rear++;
    }
    Queue[front] = val;
}

void dequeue() {
    if(isEmpty()) {
        printf("Queue sudah kosong!\n");
        return;
    }
    printf("%d keluar dari Queue\n", Queue[front]);
    if(front == rear) {
        front = rear = -1;
    } else {
        front++;
    }
}

void display() {
    if(isEmpty()) {
        printf("Queue kosong!\n");
        return;
    }
    printf("Isi Queue: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", Queue[i]);
    }
    printf("\n");
}


int main () {

    return 0;
}