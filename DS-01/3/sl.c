#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int  val;
    struct Node *next;
} Node;

Node *head = NULL;

Node *createNode(int val) {
    Node *temp = (Node *)malloc (sizeof(Node));
    temp->next = NULL;
    temp->val = val;
    return temp;
}

void enstack(int val) {
    Node *temp = createNode(val);
    if(head) {
        temp->next = head;
        head = temp;
    } else {
        head = temp;
    }
} 

void destack() {
    if(head) {
        Node *temp = head;
        head = head->next;
        free(temp);
    } else {
        printf("Stack kosong!\n");
    }
}

int main () {

    return 0;
}