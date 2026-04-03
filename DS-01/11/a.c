#include <stdio.h>
#include <string.h>

int main () {
    char s[100000];
    scanf("%s", s);
    int panjang = strlen(s)-1;
    int awal = 0;
    while(awal <= panjang) {
        if(s[awal] == s[panjang]) {
            awal++;
            panjang--;
        } else {
            printf("FAIL\n");
            return 0;
        }
    }
    printf("COMBO\n");
    return 0;
}