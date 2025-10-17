#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "demo.h"

int main()
{
  int alvo;  // Valor gerado pelo computador
  int num;
  int nTentativas=0;

  srand(time(NULL));
  alvo=1+rand()%MAX_NUM;  // Valor gerado pelo computador
//  printf("RANDOM NUMBER: %d\n", alvo);
    cls();
  do
  {
    num = readIntBetween(1,20);
    if (num<alvo)
      puts("MENOR");
    else
      if (num>alvo)
        puts("MAIOR");
      else
         puts("Hip hip Hurra!!! Sucesso");
     nTentativas++;
  } while(num!=alvo);

  printf("Nº Tentivas: %d\n", nTentativas);

  return 0;
}

void cls(){
  for(int i=1; i<=25; i++)
    printf("\n"); // puts("");
}

// Lê um inteiro entre [inf,sup]
int readIntBetween(int inf, int sup) {
int valor;
  do
  {
   printf("Introd um valor: (%d..%d): ", inf, sup);
   scanf("%d", &valor);
  }
  while(valor<inf || valor >sup);
  return valor;
}
