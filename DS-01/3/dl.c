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
    print();

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
    print();
}

//Tengah / urut
void pushMid(int val) {
    if(!head) {
        Node *temp = createNode(val);
        head = tail = temp;
    } else if (val <= head->val) {
        pushHead(val);
    } else if (val >= tail->val) {
        pushTail(val);
    } else {
        Node *temp = createNode(val);
        Node *curr = head;
        while(curr->next && val >= curr->val) {
            curr =curr->next;
        }
        // curr->prev->next = temp;
        // temp->prev = curr->prev;
        // temp->next = curr;
        // curr->prev = temp;

        Node *dump = curr->prev;
        dump->next = temp;
        temp->prev = dump;
        temp->next = curr;
        curr->prev = temp;
    }
    print();
}

void popMid(int val) {
    if (!head) {
        printf("Tidak ada data dalam list!\n");
    } else if (head == tail) {
        if(head->val = val) {
            popHead();
        } else {
            printf("%d tidak ditemukan!\n", val);
        }
    } else {
        Node *curr = head;
        while(curr && curr->val != val) {
            curr = curr->next;
        }
        if(!curr) {
            printf("%d tidak ditemukan!\n", val);
        } else {
            if(val == head->val) {
                popHead();
            } else if (val == tail->val) {
                popTail();
            } else {
                Node *kiri = curr->prev;
                Node *kanan = curr->next;
                kiri->next = kanan;
                kanan->prev = kiri;
                free(curr);
            }
        }
    }
    print();
}
int main () {
    print();
    pushMid(10);
    pushMid(10);
    pushMid(12);
    pushMid(6);
    pushMid(7);
    pushMid(8);
    popMid(3);
    popMid(10);
    popMid(10);
    popMid(6);
    popMid(8);
    popMid(7);
    popMid(12);
    return 0;
}