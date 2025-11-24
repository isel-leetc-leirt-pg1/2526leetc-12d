#include <stdio.h>

int main(){
  int n=555;

  printf("O valor do n=%d\n", n);

  printf("Introduza um valor: ");
  int res =  scanf("%d", &n);

  printf("O valor lido é igual a %d e o resutado do scanf = %d\n", n, res);

  return 0;
}
