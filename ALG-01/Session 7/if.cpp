#include <stdio.h>

int main () {
    int statusMakan, statusMinum;
    scanf("%d %d", &statusMakan, &statusMinum);
    if (statusMakan == 1 && statusMinum == 1) {
        printf("Hebat!\n");
    }
    return 0;   
}