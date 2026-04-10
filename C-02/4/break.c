#include <stdio.h>
int main()
{
    int i;
    //    init;condition; increment
    for (i = 0; i < 4  ; i++) {
      if (i == 2) continue;
      for(int j = 0; j < 4; j++){
        printf("i : %d j : %d\n", i, j);
      }   
    }
  return 0;
}