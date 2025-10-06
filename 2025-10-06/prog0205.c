#include <stdio.h>

int main()
{
  int n;
  printf("Introd. um valor (0..5): ");
  scanf("%d", &n);

  switch(n){
    case 5: puts("5");
    case 4: puts("4");
    case 3: puts("3");
    case 2: puts("2");
    case 1: puts("1");
    default: puts("ERRADO");
   }

  return 0;
}