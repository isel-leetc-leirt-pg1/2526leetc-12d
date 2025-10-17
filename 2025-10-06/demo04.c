#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  double n;
  printf("valor: "); scanf("%lf", &n);


  printf("Valor absoluto de %lf = %.3lf\n", n, fabs(n));

  printf("seno --> %lf\n", sin(45));
 return 0;
}
