#include <stdio.h>
#include <stdlib.h>

typedef struct Queue {
    int val;
    struct Queue *next;
} Queue;

Queue *head = NULL;

Queue *createQueue(int val) {
    Queue *temp = (Queue*)malloc(sizeof(Queue));
    temp->val = val;
    temp->next = NULL;
    return temp;
}

void enqueue(int val) {
    Queue *temp = createQueue(val);
    if(!head) {
        head = temp;
    } else {
        Queue *curr = head;
        while(curr->next) {
            curr = curr->next;
        }
        curr->next = temp;
    }
}

//Alias popHead
void dequeue() {
    if(!head) {
        printf("Queue kosong!\n");
        return;
    }
    printf("%d keluar dari Queue\n", head->val);
    Queue *temp = head;
    head = head->next;
    free(temp);
}

void display() {
    if(!head) {
        printf("Queue Kosong!\n");
        return;
    }
    Queue *temp = head;
    printf("Isi Queue: ");
    while(temp) {
        printf("%d ", temp->val);
        temp = temp->next;
    }
    printf("\n");
}

int main () {
    display();
    enqueue(20);
    display();
    enqueue(11);
    display();
    enqueue(10);
    enqueue(13);
    display();
    dequeue();
    display();
    dequeue();
    display();
    dequeue();
    display();
    dequeue();
    display();
    dequeue();
    return 0;
}