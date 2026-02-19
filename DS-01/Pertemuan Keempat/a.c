#include <stdio.h>
#define MAX 10

int queue[MAX];
int front = -1, rear = -1;

int isFull() {
    return (rear == MAX - 1);
}

int isEmpty() {
    return (front == -1 && rear == -1);
}

void display() {
    if(isEmpty()) {
        printf("Tidak ada Queue!\n");
        return;
    }
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

void enqueue(int val) {
    if(isFull()) {
        printf("Queue penuh!\n");
        return;
    }
    if(isEmpty()) {
        front = rear = 0;
    } else {
        rear++;
    }
    queue[rear] = val;
}

void dequeue() {
    if(isEmpty()) {
        printf("Queue Kosong!\n");
        return;
    }
    printf("%d keluar dari Queue!\n", queue[front]);
    if(front == rear) {
        front = rear = -1;
    } else {
        front++;
    }    
    display();
}

int main() {
    display();
    enqueue(10);
    enqueue(30);
    enqueue(20);
    enqueue(5);
    display();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    for (int i = 0; i < 10; i++) {
        printf("%d ", queue[i]);
    }
    return 0;
}