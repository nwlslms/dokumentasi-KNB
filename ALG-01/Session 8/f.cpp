#include <stdio.h>
#include <string.h>

int main () {
    char usn[11], pass[11];
    scanf(" %s", usn);
    scanf(" %s", pass);
    // B CMP A == 1
    if ((strcmp(usn, "admin") == 0) && (strcmp(pass, "alg01") == 0)) {
        printf("LOGIN BERHASIL\n");
    } else {
        printf("LOGIN GAGAL\n");
    }

    return 0;
}