#include <stdio.h>
#define MAX1 3
#define MAX2 5
#define MAX3 10

void inic_array(int arr[], int nElems) {
  for (int i=0; i<nElems; i++)
    arr[i] = i*11;
}

int main()
{
int arr1[MAX1];
int arr2[MAX2];
int arr3[MAX3];

/* inicialização do array arr1 */
inic_array(arr1, MAX1);

/* inicialização do array arr2 */
inic_array(arr2, MAX2);

/* inicialização do array arr3 */
inic_array(arr3, MAX3);

puts("Done!!!");
return 0;
}
