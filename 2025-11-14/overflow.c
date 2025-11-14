#include <stdio.h>

void f(int n){
  if (n%2==0)
    { printf("%d ", n); f(n+2);}
  puts("FIM");
}

int main() {

  unsigned char ch = 255+1;
  printf("Antes da soma: %d\n", ch);
  ch++;
  printf("Depois da soma: %d\n", ch);
  f(30);
  return 0;
}
