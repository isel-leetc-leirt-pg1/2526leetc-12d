#include <stdio.h>
#define MAX1 3
#define MAX2 5
#define MAX3 10

void inic_array(int arr[], int nElems) {
  for (int i=0; i<nElems; i++)
    arr[i] = i*11;
}

void print_array(int v[], int dim){
  int i=0;
  printf("Escrever o array com %d elementos\n", dim);
  while (i<dim)
   printf("%d\n", v[i++]);

}

int main()
{
int arr1[MAX1];
int arr2[MAX2];
int arr3[MAX3];

inic_array(arr1, MAX1);
inic_array(arr2, MAX2);
inic_array(arr3, MAX3);

print_array(arr1, MAX1);
print_array(arr2, MAX2);
print_array(arr3, MAX3);

print_array(arr3, MAX3/2);

puts("Done!!!");
return 0;
}
