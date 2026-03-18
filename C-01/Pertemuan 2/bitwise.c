#include <stdio.h>

int main () {
    int a = 27, b = 44;
    //AND
    printf("%d & %d: %d\n", a, b, a & b);
    //OR
    printf("%d | %d: %d\n", a, b, a | b);
    //XOR
    printf("%d ^ %d: %d\n", a, b, a ^ b);
    int c = 3;
    //NOT
    printf("!%d : %d\n", c, ~c);
    //SHIFT LEFT
    printf("<<%d: %d\n", c, c << 1);
    //SHIFT RIGHT
    printf(">>%d: %d\n", c, c >> 1);
    return 0;
}