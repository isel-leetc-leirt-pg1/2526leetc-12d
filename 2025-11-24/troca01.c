#include <stdio.h>

void troca(int *ptr1, int *ptr2)
{
  printf("\tTroca-Antes da troca  : x=%d y=%d\n", *ptr1, *ptr2);

  int tmp = *ptr1;
  *ptr1 = *ptr2;
  *ptr2 = tmp;

  printf("\tTroca-Depois da troca : x=%d y=%d\n", *ptr1, *ptr2);
}

int main(){
  int a=5, b=7;

  printf("Main-Antes da troca  : a=%d b=%d\n", a, b);

  troca(&a, &b);

  printf("Main-Depois da troca : a=%d b=%d\n", a, b);
  return 0;
}
