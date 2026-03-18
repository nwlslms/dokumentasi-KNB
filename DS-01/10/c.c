#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int data1 = 0;

typedef struct Stack {
    char warna;
    struct Stack *bot;
} Stack;

typedef struct Queue {
    char warna;
    struct Queue *next;
} Queue;

Stack *create(const char warna) {
    Stack *temp = (Stack*)malloc(sizeof(Stack));
    temp->warna = warna;
    temp->bot = NULL;
    return temp;
}

Queue *creates(const char warna) {
    Queue *temp = (Queue*)malloc(sizeof(Queue));
    temp->warna = warna;
    temp->next = NULL;
    return temp;
}

void enstack(Stack **head, const char warna){
    Stack *temp = create(warna);
    if (!(*head)) {
        *head = temp;
    } else {
        temp->bot = *head;
        *head = temp;
    }
}

void enqueue(Queue **head, const char warna)  {
    Queue *temp = creates(warna);
    if(!*head) {
        *head = temp;
    } else {
        Queue *curr = *head;
        while(curr->next) {
            curr = curr->next;
        }
        curr->next = temp;
    }
}

void destack(Stack **head) {
    if(!*head) {
        return;
    } else {
        Stack *temp = *head;
        *head = (*head)->bot;
        free(temp);
    }
}

void dequeue(Queue **head) {
    if(!*head) {
        return;
    } else {
        Queue *temp = *head;
        *head = (*head)->next;
        free(temp);
    }
} 



int main () {
    Stack *head1= NULL, *head2 = NULL;
    Queue *head3= NULL;
    int jumlah;
    scanf("%d", &jumlah);
    for(int i = 0; i < jumlah; i++) {
        char warna;
        scanf(" %c", &warna);
        enstack(&head1, warna);
        data1++;
    }
    int order;
    scanf("%d", &order);
    for(int i = 0; i < order; i++) {
        char cmd[6];
        int urutan;
        scanf(" %s", cmd);
        scanf("%d", &urutan);
        if(strcmp(cmd, "PULL") == 0) {
            if(urutan > data1) {
                printf("Macaron Furina tidak sebanyak itu pls!\n");
                continue;
            }
            for(int i = 0; i < urutan - 1; i++) {
                enqueue(&head3, head1->warna);
                destack(&head1);
                data1--;
            }
            enstack(&head2, head1->warna);
            destack(&head1);
            data1--;
            for(int i = 0; i < urutan-1; i++) {
                enstack(&head1, head3->warna); 
                dequeue(&head3);
                data1++;
            }
        } else if (strcmp(cmd, "PUT") == 0) {
            while(head2) {
                enstack(&head1, head2->warna);
                destack(&head2);
                data1++;
            }
        } else {
            printf("Apa itu? Furina tidak paham!\n");
        }
    }
    Stack *curr = head1;
    while(curr) {
        printf("%c ", curr->warna);
        curr = curr->bot;
    }
    curr = head2;
    printf("\n");
    while(curr) {
        printf("%c ", curr->warna);
        curr = curr->bot;
    }
    return 0;
}