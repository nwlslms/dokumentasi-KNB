#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int val;
    struct Node *next;
} Node;

Node *head = NULL;

Node *createNode(int val) {
    Node *temp = (Node*)malloc(sizeof(Node));
    temp->next = NULL;
    temp->val = val;
    return temp;
}

void display() {
    if(head) {
        Node *curr = head;
        while(curr) {
            printf("%d%s", curr->val, (curr->next) ? "->":"\n");
            curr = curr->next;
        }
    } else {
        printf("List kosong!\n");
    }
}

void push(int val) {
    Node *temp = createNode(val);
    if (head) {
        if(val <= head->val) {
            temp->next = head;
            head = temp;
        } else {
            Node *curr = head;
            while(curr->next && curr->next->val < val) {
                curr = curr->next;
            }
            if (!curr->next) {
                curr->next = temp;
            } else {
                Node *front = curr->next;
                curr->next = temp;
                temp->next = front;
            }
        }
    } else {
        head = temp;
    }
    display();
}

void pop(int val) {
    if (head) {
        if(head->val == val) {
            if (head->next) {
                Node *temp = head;
                head = head->next;
                free(temp);
            } else {
                free(head);
                head = NULL;
            }
        } else {
            Node *curr = head;
            while(curr->next && curr->next->val != val) {
                curr = curr->next;
            }
            if (!curr->next) {
                printf("%d tidak ada dalam list!\n", val);
            } else {
                Node *temp = curr->next;
                curr->next = temp->next;
                free(temp);
            }
        }
    } else {
        printf("List kosong!\n");
    }
    display();
}
int main () {
    display();
    push(10);
    push(2);
    push(12);
    push(11);
    push(13);
    push(8);
    push(8);
    pop(9);
    pop(8);
    pop(8);
    pop(2);
    pop(13);
    pop(11);
    pop(10);
    pop(10);
    pop(12);
    pop(10);
    return 0;
}