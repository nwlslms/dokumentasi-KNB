#include <stdio.h>
#include <string.h>



int main () {
    FILE *fp = fopen("data.txt", "w+");

    char tampung = fgetc(fp);
    for(int i = 0; tampung != '\0'; i++) {
        printf("%c", tampung);
        tampung = fgetc(fp);
    }
    fclose(fp);
    return 0;
}