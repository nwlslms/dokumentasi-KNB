
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

typedef struct Music {
    char title[21];
    struct Music *next;
} Music;

Music *head = NULL;
int totalSong = 0;

Music *newMusic(const char *title) {
    Music *new = (Music*)malloc(sizeof(Music));
    strcpy(new->title, title);
    new->next = NULL;
    return new;
}

void addSong(const char *title) {
    Music *new = newMusic(title);
    if (!head) {
        head = new;
    } else {
        Music *temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = new;
    }
    totalSong++;
}

void skipSong() {
    if(!head) {
        printf("You don't have any song on list!\n");
    } else {
        Music *temp = head;
        head = head->next;
        free(temp);
        totalSong--;
    }
}

void removeSong(int idx) {
    if (!head) {
        printf("There's no song at your list!\n");
    } else if (idx == 0) {
        skipSong();
    } else if (idx >= totalSong) {
        printf("Out of range!\n");
    } else {
        Music *temp = head;
        int index = 1;
        while (index < idx && temp->next) {
            temp = temp->next;
            index++;
        }
        Music *dels = temp->next;
        temp->next = dels->next;
        free(dels);
        totalSong--;
    }
}

void print() {
    if (!head) {
        printf("There's no any song yet\n");
    } else {
        printf("Now playing: %s\n", head->title);
        if (head->next) {
            printf("Next:\n");
            int index = 1;
            Music *temp = head->next;
            while(temp) {
                printf("%d. %s\n", index, temp->title);
                temp = temp->next;
                index++;
            }
        }
    }
}

void removeAll() {
    if (!head) {
        printf("All song are removed!\n");
    } else {
        while(head) {
            Music *dels = head;
            head = head->next;
            free(dels);
        }
        printf("All song are removed!\n");
    }
    totalSong = 0;
}

void menu();
void add();
void removes();
void skips();

int main () {
    menu();
    removeAll();
    return 0;
}

void menu() {
    while(1) {
        char cmd;
        system("CLS");
        print();
        printf("=========================\n");
        printf("1. Add Song\n");
        printf("2. Remove Song\n"); 
        printf("3. Skip Song\n");
        printf("4. Exit\n");

        cmd = getch();
        switch(cmd) {
            case '1': add(); break;
            case '2': removes(); break;
            case '3': skips(); break;
            case '4': return; break;
            default: break;
        }
    }
}

void add() {
    system("CLS");
    char song[21];
    printf("Title [20 Characters max!]: ");
    scanf(" %[^\n]", song);
    addSong(song);
    system("PAUSE");
}

void removes() {
    system("CLS");
    int cmd;
    int idx = 1;
    Music *temp = head;
    while (temp) {
        printf("%d. %s\n", idx++, temp->title);
        temp = temp->next;
    }
    printf("Pilih yang ingin di hapus: ");
    scanf("%d", &cmd);
    removeSong(cmd-1);
    system("PAUSE");
}

void skips() {
    skipSong();
    system("PAUSE");
}