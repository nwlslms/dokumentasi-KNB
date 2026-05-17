#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main_menu(){
    while(1) {
        printf("Hello, Masukkan perintah: ");
        char command[21];
        scanf(" %[^\n]", command);
        printf("Command: %s\n", command);
        system("PAUSE");
        if(strcmp(command, "QUIT") == 0) {
            printf("Babay!\n");
            return;
        }
    }
}

int main () {
    main_menu();
    return 0;
}