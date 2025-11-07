#include <stdio.h>

#define N_CHAR 256 // 0..255

int main(){
  int n_linha=0;
  for (unsigned char ch=32; ch<=255; ch++, n_linha++){
    printf("Linha: %d O char [%c] --> tem o ASCII %d\n", n_linha, ch, (int) ch);
    if (n_linha==255) break;
  }
  return 0;
}
