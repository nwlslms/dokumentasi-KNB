#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>


typedef struct {
    char nama[51];
    int status;
} Task;

// FORMAT FILE: NAMA TASK;STATUS
int jumlahTask = 0;
void displayTask();
void menu();
void tambah();
void update();
int main () {
    // 1. Ngeliat tugas apa aja
    // 2. Update status
    // 3. Menambahkan list
    // 4. Delete tugas
    // 5. Otomatis terhapus setelah update.
    menu();

    return 0;
}

void tambah() {
    printf("Nama task: ");
    char task[51];
    scanf(" %[^\n]", task);
    FILE *fp = fopen("task.txt", "a");
    fprintf(fp, "%d;%s\n", 0, task);
    fclose(fp);
    printf("Tugas %s sudah ditambahkan!\n", task);
    system("PAUSE");
}

void update() {
    int pil = 0;
    do {
        system("CLS");
        printf("================================\n");
        displayTask();
        printf("================================\n");
        printf("Pilih nomor yang ingin kamu update: ");
        scanf("%d", &pil);
    } while (pil < 1 || pil > jumlahTask);

    FILE *fp = fopen("task.txt", "r");
    Task *data = (Task*)malloc(sizeof(Task) * jumlahTask);
    int idx = 0;

    while(fscanf(fp, "%d;%[^\n]\n", &data[idx].status, data[idx].nama) == 2) {
        idx++;
    }

    freopen("task.txt", "w", fp);

    data[pil-1].status = 1;

    for(int i = 0; i < jumlahTask; i++) {
        fprintf(fp, "%d;%s\n", data[i].status, data[i].nama);
    }
    fclose(fp);
    printf("Tugas %s sudah selesai!\n", data[pil-1].nama);
    free(data);
    system("PAUSE");
}

void menu () {
    while (1) {
        system("CLS");
        char cmd;
        printf("TO-DO LIST\n");
        printf("================================\n");
        displayTask();
        printf("================================\n");
        printf("1. Add task\n2. Update task\n3. Exit\n>> ");
        cmd = getch();
        switch(cmd) {
            case '1': tambah(); break;
            case '2': update(); break;
            case '3': return; break;
            default: printf("Masukkan input yang sesuai!\n"); break;
        }
    }

}


void displayTask() {
    jumlahTask = 0;
    FILE *fp = fopen("task.txt", "r");
    char task[51];
    short status;
    short urutan = 0;

    while(fscanf(fp, "%hd;%[^\n]\n", &status, task) == 2) {
        printf("%hd. %s\t\t[%c]\n", ++urutan, task, (status == 1) ? 'X' : ' ');
        jumlahTask++;
    }

    if (urutan == 0) {
        printf("Tidak ada task!\n");
        return;
    }
    fclose(fp);
}