#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int val;
    struct Node *next;
} Node;

Node *head = Null;

Node *create(int val) {
    Node *temp = (Node*)malloc(sizeof(Node));
    temp->val = val;
    temp->next = NULL;
    return temp;
}

//Queue: FIRST IN FIRST OUT. Metode Bersilangan: Push Tail, Pop Head; Push Head, Pop Tail;
//Stack: Last In First Out. Metode Sama: Push Head, Pop Head; Push Tail, Pop Tail;

//  3 2 1.
// 1 2 3

void pushHead(int val) {
    Node *temp = create(val);
    temp->next = head;
    head = temp;
}

void popHead() {
    if(!head) return;
    Node *temp = head;
     head = head->next;
     free(head);
} 

void display() {
    if(!head) {
        return;
    }
    Node *curr = head;
    while(curr) {
        printf("%d\n", curr->val);
        curr = curr->next;
    }
}

int main () {
    
    return 0;
}