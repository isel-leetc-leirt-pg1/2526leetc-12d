#include <stdio.h>
#include <stdbool.h>

// Verifica se um nº se lê da mesma forma
// da esq->dir e dir->esq
// Nota: value > 0
bool isCapicua(int value) {
  int value_copy = value;
  int valor_invertido = 0;
  if (value<=0) return false;

  while (value!=0){
    int dig_direita = value % 10; // Obter o dígito da direita
    valor_invertido = valor_invertido*10 + dig_direita;
    value /= 10;
  }

  return value_copy==valor_invertido;
}

int main(){
  int n;
  do {
    printf("Introd. um nº: ");
    scanf("%d", &n);

    printf("O nº %d %s Capicua\n", n, isCapicua(n) ? "é" : "não é");
  } while (n!=0);

  return 0;
}
