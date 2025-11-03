#include <stdio.h>
#include "my-includes/demoheader.h"

int add(int a, int b){
  double x = mult(5.0,3.14);
  return a+b;
}

void hello() {
  puts("Hello World");
}

double mult(double x, double y) {
  int a = add(4,6);
  return x*y;
}

int main(){
  hello();

  printf("A soma de 2 com 3 = %d\n", add(2,3));
  printf("A multiplicacao de 2 com 3 = %lf\n", mult(2.0,3.0));

  hello();
  return 0;
}
