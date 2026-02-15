#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int val;
    struct Node *prev, *next;
} Node;

Node *head = NULL, *tail = NULL;

Node *createNode (int val) {
    Node *temp = (Node *) malloc (sizeof (Node));
    temp->val = val;
    temp->next = temp->prev = NULL;
    return temp;
}


void print() {
    if (head) {
        Node *curr = head;
        while(curr) {
            printf("%d%s", curr->val, (curr->next) ? "->" : "\n");\
            curr = curr->next;
        }
    } else {
        printf("Tidak ada data dalam list!\n");
    }
}
//DEPAN (popHead, pushHead)
void pushHead(int val) {
    Node *temp = createNode(val);
    if(!head) {
        head = tail = temp;
    } else {
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
    print();
}

void popHead() {
    if(!head) {
        printf("Tidak ada data dalam list!\n");
    } else {
        if(head == tail) {
            free(head);
            head = tail = NULL;
        } else {
            Node *temp = head;
            head = head->next;
            free(temp);
            head->prev = NULL;
        }
    }
    print();
}


//Belakang

void pushTail(int val) {
    Node *temp = createNode(val);
    if(!head) {
        head = tail = temp;
    } else {
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void popTail() {
    if(!head) {
        printf("Tidak ada data dalam list!\n");
    } else if (head == tail) {
        free(head);
        head = tail = NULL;
    } else {
        Node *temp = tail;
        tail = tail->prev;
        free(temp);
        tail->next = NULL;
    }
}
int main () {
    print();
    pushHead(12);
    pushHead(10);
    popHead();
    popHead();
    return 0;
}