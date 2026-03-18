#include <stdio.h>
#include <string.h>
#define MAX 5

char table[MAX][21];

void init() {
    for (int i = 0; i < MAX; i++) {
        strcpy(table[i], "EMPTY");
    }
}

void display() {
    for (int i = 0; i < MAX; i++) {
        if(strcmp(table[i], "EMPTY") == 0 || strcmp(table[i], "DELETED") == 0) {
            printf("[%d] KOSONG\n", i);
        } else {
            printf("[%d] %s\n", i, table[i]);
        }
    }
}

int hash(const char* val) {
    int total = 0;
    for (int i = 0; val[i] != '\0'; i++) {
        total += val[i];
    }
    return total % MAX;
}

void insert(const char *val) {
    int key = hash(val);
    int start = key;
    do {
        //table[key] == "EMPTY"
        if (strcmp(table[key], "EMPTY") == 0 || strcmp(table[key], "DELETED") == 0) {
            strcpy(table[key], val);
            return;
        }
        key = (key + 1) % MAX;
    } while (start != key);
    printf("Data penuh!\n");
}

int search(const char *val) {
    int key = hash(val);
    int start = key;
    do {
        if (strcmp(table[key], "EMPTY") == 0) {
            return -1;
        }
        if(strcmp(table[key], val) == 0) {
            return key;
        }
        key = (key +1) % MAX;
    } while (start != key);
    return -1;
}

void deleteVal(const char *val) {
    int key = search(val);
    if(key == -1) {
        return;
    }
    strcpy(table[key], "DELETED");
}

int main () {
    init();
    display();
    insert("Nawwal");
    insert("Ahmad");
    insert("Balya");
    display();
    deleteVal("Nawwal");
    display();
    return 0;
}