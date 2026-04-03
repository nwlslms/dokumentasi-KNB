#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
    int val;
    struct Node *next, *prev;
} Node;

Node *head = NULL, *tail = NULL;

Node *create(int val) {
    Node *temp = (Node*)malloc(sizeof(Node));
    temp->val = val;
    temp->next = temp->prev = NULL;
    return temp;
}

void pushHead(int val) {
    Node *temp = create(val);
    if(!head) {
        head = tail = temp;
    } else {
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void pushTail(int val) {
    Node *temp = create(val);
    if(!head) {
        head = tail = temp;
    } else{
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void rem(int val) {
    if(!head) {
        return;
    }
    if(val == head->val) {
        Node *temp = head;
        head = head->next;
        head->prev = NULL;
        free(temp);
    } else if (val == tail->val) {
        Node *temp = tail;
        tail = tail->prev;
        tail->next = NULL;
        free(temp);
    } else {
        Node *curr = head;
        while(curr && curr->val != val) {
            curr = curr->next;
        }
        Node *temp = curr;
        curr->prev->next = curr->next;
        curr->next->prev = curr->prev;
        free(temp);
    }
}

void geserkiri(int val) {
    if(!head) {
        return;
    }
    if(val == head->val) {
        return;
    } else if (val == tail->val) {
        Node *temp = tail;
        tail = tail->prev;
        tail->next = NULL;
        temp->next = head;
        head->prev = temp;
        head = temp;
        head->prev = NULL;
    } else {
        Node *curr = head;
        while(curr && curr->val != val) {
            curr = curr->next;
        }
        Node *temp = curr;
        curr->next->prev = curr->prev;
        curr->prev->next = curr->next;
        temp->next = head;
        head->prev = temp;
        temp->prev = NULL;
        head = temp;
    }
}

void geserkanan(int val) {
    if(!head) {
        return;
    }
    if (val == head->val) {
        Node *temp = head;
        head = head->next;
        head->prev = NULL;
        temp->prev = tail;
        tail->next = temp;
        tail = temp;
        tail->next = NULL;
    } else if (val == tail->val) {
        return;
    } else {
        Node *curr = head;
        while(curr && curr->val != val) {
            curr = curr->next;
        }
        Node *temp = curr;
        curr->prev->next = curr->next;
        curr->next->prev = curr->prev;
        temp->prev = tail;
        tail->next = temp;
        tail = temp;
        tail->next = NULL;
    }
}

void display() {
    Node *curr = head;
    if(!curr) {
        return;
    }
    while(curr) {
        printf("%d%s", curr->val, curr->next ? " " : "\n");
        curr = curr->next;
    }
}

int main () {
    int Q;
    scanf("%d", &Q);
    for(int i = 0; i < Q; i++) {
        char command[21];
        int val;
        scanf("%s %d", command, &val);
        if(strcmp(command, "LEFT") == 0) {
            pushHead(val);
        } else if (strcmp(command, "RIGHT") == 0) {
            pushTail(val);
        } else if (strcmp(command, "REMOVE") == 0) {
            rem(val);
        } else if (strcmp(command, "MOVE_LEFT") == 0) {
            geserkiri(val);
        } else if (strcmp(command, "MOVE_RIGHT") == 0) {
            geserkanan(val);
        } else {
            printf("DEBUG");
        }
    }
    display();
    return 0;
}