#include <stdio.h>
#include <stdlib.h>
#define MAX 5

typedef struct Node {
    int key;
    int val;
    struct Node *next;
} Node;

Node *table[MAX];

Node *create(int key, int val) {
    Node *temp = (Node*)malloc(sizeof(Node));
    temp->key = key;
    temp->val = val;
    temp->next = NULL;
    return temp;
}

int hash (int val) {
    return val % MAX;
}

void insert(int val) {
    int key = hash(val);
    Node *temp = create(key, val);
    if(table[key] == NULL) {
        table[key] = temp;
    }  else {
        Node *curr = table[key];
        while(curr->next) {
            curr = curr->next;
        }
        curr->next = temp;
    }
}

void init() {
    for (int i = 0; i < MAX; i++) {
        table[i] = NULL;
    }
}

void display() {
    for (int i = 0; i < MAX; i++) {
        printf("Table ke-%d\n", i);
        if(table[i] == NULL) {
            printf("KOSONG\n\n");
        } else {
            Node *curr = table[i];
            while(curr) {
                printf("%d | %d \n", curr->key, curr->val);
                curr = curr->next;
            }
        }
    }
}

int search(int val) {
    int key = hash(val);
    if(table[key] == NULL) { 
        return -1;
    } else {
        Node *curr = table[key];
        while(curr != NULL) {
            if(curr->val == val) {
                return key;
            }
            curr = curr->next;
        }
        return -1;
    }
}

void delete(int val) {
    int key = search(val);
    if(key == -1) {
        return;
    }
    if(val == table[key]->val) {
        Node *temp = table[key];
        table[key] = table[key]->next;
        free(temp);
    } else {
        Node *curr = table[key];
        Node *prev = NULL;
        while(curr && curr->val != val) {
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        free(curr);
    }
}

int main () {
    init();
    insert(12);
    insert(13);
    insert(1);
    insert(17);
    insert(20);
    insert(14);
    insert(33);
    display();
    printf("Value %d ketemu di index ke %d\n", 14, search(33));
    display();
    delete(12);
    delete(17);
    printf("\n\n\n");
    display();
    return 0;
}