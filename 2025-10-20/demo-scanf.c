#include <stdio.h>
#include <stdbool.h>

bool validate_triplo(int x, int y, int z)
{
   // if (x<0) return false;
   // if (y>=0 && y<=10) return false;
   // if (z%2==0) return false;
   // return true;


   return (x>=0) && (y<0 || y>10) && (z%2==1);
}

int main()
{
  int x1,x2,x3;
  int y1,y2,y3;

  do
  {
    printf("Introduza 1º triplo: "); 
    int nElems = scanf("%d %d %d", &x1, &x2, &x3);
    if(nElems!=3)
    {
      puts("ERRRRROOOOO nao foram 3 elementos");
      while (getchar()!='\n')
             ;
    }

    if (validate_triplo(x1,x2,x3))
      break;
    else
      printf("Dados inválidos\n");

  } while (1);

  printf("Introduza 2º triplo: ");
  scanf("%d %d %d", &y1, &y2, &y3);
  validate_triplo(y1,y2,y3);

  return 0;
}
