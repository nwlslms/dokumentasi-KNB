#include <stdio.h>
#include <stdlib.h>

typedef struct Gerbong {
    int penumpang;
    struct Gerbong *next;
} Gerbong;

Gerbong *head = NULL;

//Create Node
Gerbong *pabrik(int penumpang) {
    Gerbong *blueprint = (Gerbong*)malloc(sizeof(Gerbong));
    blueprint->penumpang = penumpang;
    blueprint->next = NULL;
    return blueprint;
}

void print() {
    if (head == NULL) {
        printf("Gerbong tidak ada sama sekali!\n");
    } else {
        Gerbong *temp = head;
        printf("Gerbong kereta: ");
        while(temp != NULL) {
            if (temp->next == NULL) {
                printf("%d\n", temp->penumpang);
            } else {
                printf("%d-", temp->penumpang);
            }
            temp = temp->next;
        }
    }
}

//pushHead()
void sambungDepan(int penumpang) {
    Gerbong *proto = pabrik(penumpang);
    if (head == NULL) {
        head = proto;
    } else {
        proto->next = head;
        head = proto;
    }
    print();
}

//popHead()
void putusDepan() {
    if (head == NULL) {
        printf("Tidak ada gerbong!\n");
    } else if (head->next == NULL) {
        free(head);
        head = NULL;
    } else {
        Gerbong *hapus = head;
        head = head->next;
        hapus->next = NULL;
        free(hapus);
    }
    print();
}

void sambungBelakang(int penumpang) {
    Gerbong *proto = pabrik(penumpang);
    if (head == NULL) {
        head = proto;
    } else {
        Gerbong *temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = proto;
    }
    print();
}

void putusBelakang() {
    if (!head) {
        printf("Tidak ada gerbong!\n");
    } else if (head->next == NULL) {
        free(head);
        head = NULL;
    } else {
        Gerbong *temp = head;
        while(temp->next->next != NULL) {
            temp = temp->next;
        }
        Gerbong *hapus = temp->next;
        temp->next = NULL;
        free(hapus);
    }
    print();
}

void push(int penumpang) {
    if (!head) {
        Gerbong *proto = pabrik(penumpang);
        head = proto;
    } else if (penumpang <= head->penumpang) {
        sambungDepan(penumpang);
    } else {
        Gerbong *proto = pabrik(penumpang);
        Gerbong *temp = head;
        while(temp->next != NULL && temp->next->penumpang < penumpang) {
            temp = temp->next;
        }
        proto->next = temp->next;
        temp->next = proto;
    }
    print();
}

void pop(int penumpang) {
    if (!head) {
        printf("Tidak ada yang bisa diputus!\n");
    } else if (head->penumpang == penumpang) {
        if (head->next == NULL) {
            free(head);
            head = NULL;
        } else {
            Gerbong *hapus = head;
            head = head->next;
            free(hapus);
        }
    } else{
        Gerbong *temp = head;
        while(temp->next != NULL && temp->next->penumpang != penumpang) {
            temp = temp->next;
        }
        if (!temp->next) {
            printf("%d tidak ditemukan!\n", penumpang);
        } else {
            Gerbong *hapus = temp->next;
            temp->next = hapus->next;
            free(hapus);
        }
    }
    print();
}

int main () {
    print();
    // sambungDepan(10);
    // sambungDepan(200);
    // sambungDepan(300);
    // sambungDepan(2);
    push(10);
    push(8);
    push(12);
    push(11);
    push(8);
    push(9);
    pop(50);
    pop(12);
    pop(8);
    pop(8);
    return 0;
}