#include <stdio.h>

int main () {
    short Jenis[1000] = {0};
    // 9 8 9 2 4
    // Jenis[8] = 2
    // Jenis[7] = 1
    // Jenis[1] = 1
    // Jenis[4] = 1

    short Pengecualian[1000] = {0};
    // 8 2
    // Jenis[7] = 1
    // Jenis[1] = 1
    short Jumlah;
    scanf("%hd", &Jumlah);
    for(int i = 0; i < Jumlah; i++) {
        short Type;
        scanf("%hd", &Type);
        Jenis[Type-1]++;
    }

    short exclude;
    scanf("%hd", &exclude);
    for(int i = 0; i < exclude; i++) {
        short exc;
        scanf("%hd", &exc);
        Pengecualian[exc-1] = 1;
    }

    short urutan[1001]= {-1};

    short max = 0, bestBird = -1, sama = 0;
    for(int i = 0; i < 1000; i++) {
        if (Jenis[i] >= max && Pengecualian[i] != 1) {
            if (Jenis[i] == max) {
                urutan[sama++] = max;
                urutan[sama++] = Jenis[i];
            }
            max = Jenis[i];
            bestBird = i + 1;
        }
    }

    if (bestBird == -1) {
        printf("No Bird\n");
    } else {
        if (sama == 0) {
            printf("Bird %hd\n", bestBird);
        } else {
            for(int i = 0; i < sama; i++) {
                printf("Bird %hd\n", urutan[i]);
            }
        }
    }
    return 0;
}