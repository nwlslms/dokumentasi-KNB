#include <stdio.h>
#include <stdlib.h>

typedef struct Stack {
    int val;
    struct Stack *bottom;
} Stack;

Stack *top = NULL;

Stack *createStack(int val) {
    Stack *temp = (Stack*)malloc(sizeof(Stack));
    temp->val = val;
    temp->bottom = NULL;
    return temp;
}

void display() {
    if(!top) {
        printf("Tidak ada Stack!\n");
        return;
    }
    printf("Isi stack:\n");
    Stack *curr = top;
    while(curr) {
        printf("%d\n", curr->val);
        curr = curr->bottom;
    }
}

void enstack(int val) {
    Stack *temp = createStack(val);
    if(!top) {
        top = temp;
    } else {
        temp->bottom = top;
        top = temp;
    }
    display();
}

void destack() {
    if(!top) {
        printf("Stack kosong!\n");
        return;
    }
    printf("%d keluar dari stack\n", top->val);
    Stack *temp = top;
    top = top->bottom;
    free(temp);
}

//push dan pop head
int main () {
    display();
    enstack(10);
    enstack(2);
    enstack(7);
    enstack(5);
    enstack(12);
    destack();
    destack();
    destack();
    destack();
    destack();
    destack();
    destack();
    destack();
    destack();
    destack();
    return 0;
}