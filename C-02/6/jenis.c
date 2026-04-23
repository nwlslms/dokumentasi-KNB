#include <stdio.h>

int main () {
    // 1 dimensi 1 x 3, 3 x 1
    int matrix_baris[3];
    for (int i = 0; i < 3; i++) {
        scanf("%d", &matrix_baris[i]);
    }
    printf("Matrix Baris: ");
    for (int i = 0; i < 3; i++) {
        printf("%d ", matrix_baris[i]);
    }
    printf("\n");
    

    // 2 Dimensi
    int matrix2d[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrix2d[i][j]);
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix2d[i][j]);
        }
        printf("\n");
    }

    int matrix1d[9];
    for (int i = 0; i < 9; i++) {
        scanf("%d", &matrix1d[i]);
    }
    for (int i = 0; i < 9; i++) {
        printf("%d", matrix1d[i]);
        if (i == 2 || i == 5 || i == 8) {
            printf("\n");
        }
    }
    
    //3 Dimensi n matrix 3 x 3
    int matrix3d[3][3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                scanf("%d", &matrix3d[i][j][k]);
            }
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                printf("%d", matrix3d[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}