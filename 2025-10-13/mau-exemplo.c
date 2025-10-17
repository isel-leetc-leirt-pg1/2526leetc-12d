#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool validade_time(int hora, int min, int seg) {
  if (hora<0 || hora>23) return false;
  if (min<0 || min>59)   return false;
  if (seg<0 || seg>59)   return false;

  return true;
}


int main() {
  int hNasc, mNasc, sNasc;

  double x = floor(3.1415);

  printf("Hora Min Seg de nascimento: "); 
  scanf("%d %d %d", &hNasc, &mNasc, &sNasc);

  if (!validade_time(hNasc, mNasc, sNasc)) return 0;
  puts("HORA OK!!!!!");


  int hTeste, mTeste, sTeste;

  printf("Hora Min Seg do Teste: ");
  scanf("%d %d %d", &hTeste, &mTeste, &sTeste);

  if (validade_time(hTeste, mTeste, sTeste))
    puts("HORA DO TESTE OK");
  else
    puts("HORA INVALUDA");
  return 0;
}
