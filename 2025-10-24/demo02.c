#include <stdio.h>
#define MAX 10
int main()
{
  double arr[] = {-2,-1,0,1,2,3,23,4,4,6,6,7,8,8,56,6,5,4,4,9999};

int x[];

  for (int i=0; i<sizeof(arr)/sizeof(arr[0]); i++)
   printf("O valor de arr[%d] é igual a %lf\n", i, arr[i]);

  return 0;
}
