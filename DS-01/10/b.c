#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Queue {
    int priority;
    char task[51];
} Queue;

int cekSeru(const char *todo) {
    char kunci[] = "seru-seruan";
    char *pos = strstr(todo, kunci);
    if(pos != NULL) {
        return 1;
    } else {
        return 0;
    }
}

void swap(Queue *a, Queue *b) {
    Queue temp = *a;
    *a = *b;
    *b = temp;
}

int main () {
    int cases;
    scanf("%d", &cases);
    int data = 0;
    Queue *array = (Queue*)malloc(sizeof(Queue)*cases);
    for(int i = 0; i < cases; i++) {
        int priority;
        char todo[51];
        scanf("%d %[^\n]", &priority, todo);
        if(cekSeru(todo)) {
            continue;
        } else {
            array[data].priority = priority;
            strcpy(array[data].task, todo);
            data++;
        }
    }
    for(int i = 0; i < data - 1; i++) {
        for(int j = i + 1; j < data; j++) {
            if(array[i].priority < array[j].priority) {
                swap(&array[i], &array[j]);
            }
        }
    }
    for(int i = 0; i < data - 1; i++) {
        for(int j = i + 1; j < data; j++) {
            if(array[i].priority == array[j].priority) {
                if(strcmp(array[i].task, array[j].task) < 0) {
                    swap(&array[i], &array[j]);
                }
            }
        }
    }
    for(int i = 0; i < data; i++) {
        printf("%s\n", array[i].task);
    }
    return 0;
}