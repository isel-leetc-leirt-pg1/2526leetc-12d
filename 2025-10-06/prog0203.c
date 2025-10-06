#include <stdio.h>

int main()
{
  int a, b, c, maior;
  printf("Introd. três valores: ");
  scanf("%d %d %d", &a, &b, &c);

  if (a>=b && a>=c)
    maior = a;
  else
    if (b>=a && b>=c)
      maior = b;
    else
      maior = c;

    printf("Big one (%d,%d,%d) --> %d\n", a, b, c, maior);
  return 0;
}