/*

Array 1001 -> 1001 byte * 2 = 2002 byte

Input String -> Array 
Kita Balik -> Array
Bedah per karakter -> Character
Typecasting -> proses

Input String -> Array 1001 Byte
Telusurin dari belakang per character;
*/
#include <stdio.h>
#include <string.h>

int main () {
    short T;
    scanf("%hd", &T);
    for(int i = 0; i < T; i++) {
        char S[1001];
        scanf("%s", S);
        short len = strlen(S);
        /*
        BinusUniversity
        len = 15 -1
        */
        printf("Case %d: ", i+1);
        for(int j = len-1; j >= 0; j--) {
            short ASCII = (short)S[j];
            printf("%hd", ASCII % 2);
        }
        printf("\n");
    }
    return 0;
}