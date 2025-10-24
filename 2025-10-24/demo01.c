#include <stdio.h>
#define MAX 10
int main()
{
int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10;
int arr[MAX];

int i=1;

printf("O valor de n%d é igual a %d\n", i++, n1);
printf("O valor de n%d é igual a %d\n", i++, n2);
printf("O valor de n%d é igual a %d\n", i++, n3);
printf("O valor de n%d é igual a %d\n", i++, n4);
printf("O valor de n%d é igual a %d\n", i++, n5);
printf("O valor de n%d é igual a %d\n", i++, n6);
printf("O valor de n%d é igual a %d\n", i++, n7);
printf("O valor de n%d é igual a %d\n", i++, n8);
printf("O valor de n%d é igual a %d\n", i++, n9);
printf("O valor de n%d é igual a %d\n", i++, n10);
printf("\n\n\n");
for (i=0; i<MAX; i++)
 printf("O valor de arr[%d] é igual a %d\n", i, arr[i]);
return 0;
}
