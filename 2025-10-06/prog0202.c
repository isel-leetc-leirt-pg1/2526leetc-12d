#include <stdio.h>

int main()
{
  int a, b;
  printf("Introd. dois valores: ");
  scanf("%d %d", &a, &b);

  if (a>b)
    printf("O maior entre %d e %d é %d\n", a, b, a);
  else
    printf("O maior entre %d e %d é %d\n", a, b, b);

  return 0;
}