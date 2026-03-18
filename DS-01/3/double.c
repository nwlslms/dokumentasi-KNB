#include <stdlib.h>
#include <stdio.h>

typedef struct Node {
    int val;
    struct Node *next, *prev;
} Node;

Node *createNode(int val) {
    Node *temp = (Node*)malloc(sizeof(Node));
    temp->val = val;
    temp->next = temp->prev = NULL;
    return temp;
}

void print(Node **head, Node **tail) {
    if (!*head) {
        printf("Node kosong!\n");
        return;
    }
    Node *curr = *head;
    while(curr) {
        if(curr->next) {
            printf("%d->", curr->val);
        } else {
            printf("%d\n", curr->val);
        }
        curr = curr->next;
    }
}

void pushHead(Node **head, Node **tail, int val) {
    Node *temp = createNode(val);
    if (!*head) {
        *head = *tail = temp;
    } else {
        temp->next = *head;
        (*head)->prev = temp;
        *head = temp;
    }
    print(head, tail);
}

void pushTail(Node **head, Node **tail, int val) {
    Node *temp = createNode(val);
    if(!*head) {
        *head = *tail = temp;
    } else {
        (*tail)->next = temp;
        temp->prev = *tail;
        *tail = temp;
    }
    print(head, tail);
}

void freeAll(Node **head, Node **tail) {
    if (!*head) {
        printf("Node kosong!\n");
        return;
    }
    Node *temp = *head;
    while (temp) {
        Node *dels = temp;
        temp = temp->next;
        free(dels);
    }
    *head = *tail = NULL;
}

void popTail(Node **head, Node **tail) {
    if (!*head) {
        printf("Node kosong!\n");
        return;
    }
    Node *dels = *tail;
    if (*head == *tail) {
        free(dels);
        *head = *tail = NULL;
    } else {
        (*tail) = dels->prev;
        free(dels);
        (*tail)->next = NULL;
    }
}

void popHead(Node **head, Node **tail) {
    if(!*head) {
        printf("Tidak ada Node!\n");
        return;
    }
    Node *del = *head;
    if (*head == *tail) {
        free(del);
        *head = *tail = NULL;
    } else {
        *head = (*head)->next;
        free(del);
    }
}

int main () {
    Node *head = NULL, *tail = NULL;
    print(&head, &tail);
    pushHead(&head, &tail, 10);
    pushHead(&head, &tail, 20);
    pushHead(&head, &tail, 1);
    freeAll(&head, &tail);
    pushTail(&head, &tail, 30);
    popHead(&head, &tail);
    print(&head, &tail);
    return 0;
}