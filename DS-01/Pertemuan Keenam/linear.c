#include <stdio.h>
#define MAX 5

int tabel[MAX];

void init () {
    for (int i = 0; i <MAX ;i++) {
        tabel[i] = -1;
    }
}

void display() {
    for (int i = 0; i < MAX; i++) {
        printf("[%d] %d\n", i, tabel[i]);
    }
}

int hash (int val) {
    return val % MAX;
}

void insert(int val) {
    //Val -> Hashing -> Key -> tabel[key] = val
    int key = hash(val);
    int start = key;
    while(tabel[key] != -1) {
        key = (key + 1) % MAX;
        if(start == key) {
            printf("Tabel sudah penuh!\n");
            return;
        }
    }
    tabel[key] = val;
    printf("Value %d sudah masuk di tabel ke-%d\n", val, key);
}

int search(int val) {
    int key = hash(val);
    int start = key;
    do {
        if(tabel[key] == -1) {
            return -1;
        }
        if(tabel[key] == val) {
            return key;
        }
        key = (key + 1) % MAX;
    } while (start != key);

    return -1;
}

void cari(int val) {
    int key = search(val);
    if (key == -1) {
        printf("Value %d tidak ditemukan!\n", val);
    } else {
        printf("Value %d ditemukan di tabel ke-%d\n", val, key);
    }
}

int main () {
    init();
    insert(10);
    insert(2);
    insert(3);
    insert(12);
    insert(33);
    display();
    cari(44);
    cari(2);
    cari(33);
    return 0;
}