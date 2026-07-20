#include <stdio.h>
#include <string.h>

int main () {
    FILE *fp = fopen("data.txt", "a");
    char teks[] = "Nawwal ganteng banget\n";
    for (int i = 0; teks[i] != '\0'; i++) {
        fputc(teks[i], fp);
    }

    char text[] = "Nawwal jahat deng\n";
    fputs(text, fp);

    freopen("format.txt", "a", fp);
    fprintf(fp, "%s;%d;%s\n", "Harits", 2030, "ITS");
    fclose(fp);
    return 0;
}