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
}

void addSong(const char *title) {
    totalSong++;
}

void skipSong() {
    if(!head) {
        printf("You don't have any song on list!\n");
    } else {
        totalSong--;
    }

}

void removeSong(int idx) {
    if (!head) {
        printf("There's no song at your list!\n");
    } else if (idx == 0) {
        skipSong();
    } else if (idx > totalSong) {
        printf("Out of range!\n");
    } else {
        while (temp->next && index < hapus) {
        }
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
       
        cmd = getch();
        switch(cmd) {
            case '1': add(); break;
            case '2': removes(); break;
            case '3': skips(); break;
            default: break;
        }
    }
}

void add() {
    system("CLS");
    char song[21];
    printf("Title [20 Characters max!]: ");
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
    system("PAUSE");
}
void skips() {
    system("PAUSE");
}