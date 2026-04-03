#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int val;
    struct Node *next;
} Node;

void pushBack(Node *head, Node new) {
    if(head = NULL) {
        *head = new;
    } else {
        new.next = head;
        *head = new;
    }
}

int main () {
    Node *head = NULL;
    Node baru;
    baru.next = NULL;
    baru.val = 12;

    Node baru2;
    baru2.next = NULL;
    baru2.val = 12;
    pushBack(head, baru);
    printf("%d\n", head->val);
    return 0;
}