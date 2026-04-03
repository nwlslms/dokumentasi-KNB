#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int berat;
    struct Node *next;
} Node;

Node *head = NULL;

Node *create(int val) {
    Node *temp = (Node*)malloc(sizeof(Node));
    temp->berat = val;
    temp->next = NULL;
    return temp;
}

void insert(int val) {
    Node *temp = create(val);

    if (!head || val >= head->berat) {
        temp->next = head;
        head = temp;
        return;
    }

    Node *curr = head;
    while (curr->next && curr->next->berat > val) {
        curr = curr->next;
    }

    temp->next = curr->next;
    curr->next = temp;
}

int main() {
    int hari;
    scanf("%d", &hari);

    for (int i = 0; i < hari; i++) {
        int berat;
        scanf("%d", &berat);
        insert(berat);
    }

    while (head && head->next) {
        Node *T = head;
        Node *R = head->next;
        int a = T->berat;
        int b = R->berat;

        head = R->next;
        free(T);
        free(R);

        if (a != b) {
            int diff = a - b; 
            insert(diff);        
        }
    }

    if (head) {
        printf("%d\n", head->berat);
        free(head);
        head = NULL;
    } else {
        printf("0\n");
    }

    return 0;
}