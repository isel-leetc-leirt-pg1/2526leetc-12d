#include <stdio.h>


int main() {
  int arr1[10] = {1,2,3,4,5};

  int i= 9;
  while(1)
    printf("%d ", arr1[--i]);
  return 0;
}

