#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    FILE *fp = fopen("data.txt", "a");

    fputs("List orang ganteng\n", fp);

    char nama[] = "Nawwal Salim";
    for (int i = 0; nama[i] != '\0'; i++) {
        fputc(nama[i], fp);
    }
    fputc('\n', fp);
    while (1) {
        char name[21];
        scanf(" %[^\n]", name);
        if (strcmp(name, "NaN") == 0) {
            break;
        }
        fprintf(fp, "Orang: ");
        fprintf(fp, "%s\n", name);
    }
    fclose(fp);
    return 0;
}