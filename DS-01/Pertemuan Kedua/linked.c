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
    if (!head) {
        printf("Gerbong tidak ada sama sekali!\n");
    } else {
        Gerbong *temp = head;
        printf("Gerbong kereta: ");
        //temp->next != NULL
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


int main () {
    print();
    sambungDepan(10);
    sambungDepan(200);
    sambungDepan(300);
    sambungDepan(2);
    putusDepan();
    putusDepan();
    putusDepan();
    putusDepan();
    return 0;
}