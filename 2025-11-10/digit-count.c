#include <stdio.h>
#include <stdbool.h>

// Devolve o número de ocorrências de [digit] em [value]
int countDigit(unsigned long int value, int digit) {
  int count=0;
  if (value==0 && digit==0) return 1;

  while (value!=0)
  {
    if (value%10==digit)
      count++;
    value /= 10;
  }
  return count;
}

int main(){
  unsigned long int num;
  do {
    printf("Introd. um número. "); scanf("%lu", &num);
    for (int digit=0; digit<=9; digit++)
      printf("O nº %lu contém o dígito %d --> %d vezes\n",
             num, digit, countDigit(num, digit));
  } while (num!=0);
  return 0;
}
