#include <stdio.h>
#define MAX 5

int table[MAX];

int hash(int val) {
    return val % MAX;
}

void insert(int val) {
    //Dapetin Key dari value, terus kita masukin ke table
    int key = hash(val);
    int start = key;
    do {
        if(table[key] == -1 || table[key] == -2) {
            table[key] = val;
            return;
        }
        key = (key + 1) % MAX;
    } while (key != start);
    printf("Data sudah penuh!\n");
}

int search(int val) {
    int key = hash(val);
    int start = key;
    while(table[key] != val) {
        if(table[key] == -1) {
            return -1;
        }
        key = (key + 1) % MAX;
        if(start == key) {
            return -1;
        }
    }
    return key;
}

void deleteVal(int val) {
    int key = search(val);
    if(key == -1) {
        return;
    }
    table[key] = -2;
}

void init() {
    for (int i = 0; i < MAX; i++) {
        table[i] = -1;
    }
}

void display  () {
    for (int i = 0; i < MAX; i++) {
        if(table[i] == -1 || table[i] == -2)
         {
            printf("[%d] KOSONG\n", i);
         } else {
            printf("[%d] %d\n", i, table[i]);
         }
    } 
}

int main () {
    init();
    insert(20);
    insert(10);
    insert(13);
    insert(12);
    insert(14);
    display();
    printf("%d ada di index ke %d\n", 10, search(10));
    deleteVal(20);
    display();
    printf("%d ada di index ke %d\n", 10, search(10));
    insert(30);
    display();
    return 0;
}