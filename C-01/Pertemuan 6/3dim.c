#include <stdio.h>

int main () {
    int matrix[3][2][2];
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            for(int k = 0; k < 2; k++) {
                scanf("%d", &matrix[i][j][k]);
            }
        }
    }
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            for(int k = 0; k < 2; k++) {
                printf("%d", matrix[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}