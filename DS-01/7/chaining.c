#include <stdio.h>
#include <stdlib.h>
#define MAX 5

typedef struct Node {
    int val;
    int key;
    struct Node *next;
} Node;

Node *table[MAX];

void init() {
    for (int i = 0; i < MAX; i++) {
        table[i] = NULL;
    }
}

void display() {
    for (int i = 0; i < MAX; i++) {

        printf("Table ke-%d\n", i);
        if(table[i]) {
            Node *curr = table[i];
            while(curr) {
                printf("%d ", curr->val);
                curr = curr->next;
            }
            printf("\n");
        }
    }
}

int hash(int key) {
    return key % MAX;
}

Node *create(int key, int val) {
    Node *temp = (Node*)malloc(sizeof(Node));
    temp->key = key;
    temp->val = val;
    temp->next = NULL;
    return temp;
}

void insert(int val) {
    int key = hash(val);
    Node *temp = create(key, val);
    //Push Tail
    if(table[key] == NULL) {
        table[key] = temp;
    } else {
        Node *curr  = table[key];
        while(curr->next) {
            curr = curr->next;
        }
        curr->next = temp;
    }
}

int main () {
    init();
    display();
    insert(13);
    insert(23);
    insert(3);
    insert(167);
    insert(30);
    insert(200);
    insert(10);
    insert(14);
    display();
    return 0;
}