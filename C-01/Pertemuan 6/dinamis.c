#include <stdio.h>
#include <stdlib.h>

int main () {
    // 10 data int = 4 * 10 = 40
    int n;
    scanf("%d", &n);
    int *data = (int*)malloc(sizeof(int) * n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &data[i]);
        //scanf("%d", (data + i));
    }
    for(int i = 0; i < n; i++) {
        printf("%d\n", data[i]);
        //printf("%d\n", *(data + i));
    }
    free(data);
    return 0;
}