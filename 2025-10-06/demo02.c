#include <stdio.h>
int main()
{
 int var = 6;
 while (var >=0)
 {
   printf("%d ", var);
   var = var + 1000000;
 }

 printf("\nFINAL: %d\n", var);
 return 0;
}
