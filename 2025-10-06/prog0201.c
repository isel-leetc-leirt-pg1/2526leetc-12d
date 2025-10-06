#include <stdio.h>

int main()
{
  int n;
  printf("Introd. um valor: ");
  scanf("%d", &n);

  if (n%2==0)
    puts("É par");
  else
    puts("É ímpar");

  return 0;
}