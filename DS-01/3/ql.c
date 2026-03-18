#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int val;
    struct Node *next;
} Node;

Node *head = NULL;

Node *createNode(int val) {
    Node *temp = (Node*)malloc(sizeof(Node));
    temp->next = NULL;
    temp->val = val;
    return temp;
}

void enqueue(int val) {
    Node *temp = createNode(val);
    if(head) {
        Node *curr = head;
        while(curr->next) {
            curr = curr->next;
        }
        curr->next = temp;
    } else {
        head = temp;
    }
}

void dequeue() {
    if (head) {
        Node *temp = head;
        head = head->next;
        free(temp);
    } else {
        printf("Queue kosong!\n");
    }
}

void display() {
    if (head) {
        printf("Queue: ");
        Node *curr = head;
        while(curr) {
            if(curr->next) {
                printf("%d->", curr->val);
            } else {
                printf("%d\n", curr->val);
            }
            curr = curr->next;
        }
    } else {
        printf("Queue kosong!\n");
    }
}

int main () {

    return 0;
}