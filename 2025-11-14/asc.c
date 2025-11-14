#include <stdio.h>
int main() {

  for (int i=32; i<=255; i++)
    printf("CH como int é %d e como char é '%c'\n", '0'+i, '0'+i);
  return 0;
}
