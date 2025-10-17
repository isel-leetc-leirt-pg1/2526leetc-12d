#include <stdio.h>

int mult(int a, int b) 
{
  return a*b;
}

void linha(int nChars, char ch)
{
  for(int i=1; i<=nChars; i++)
    putchar(ch);
  putchar('\n');
}

void retangulo(int nLinhas, int nCols, char ch){
  for (int i=1; i<=nLinhas; i++)
    linha(nCols, ch);
}

void quadrado(int lado, char ch){
  retangulo(lado, lado, ch);

}

void triangulo(int nChars, char ch) {
  for (int i=1; i<=nChars; i++)
    linha(i, ch);
}

int main(){
  retangulo(3,5,'@');

  quadrado(8, '=');
  triangulo(4, 'P');
  return 0;
}





