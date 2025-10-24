#include <stdio.h>
#define MAX 100
void f(int *v)
{  printf("Função f() : Dimensão de v=%lu Bytes\n", sizeof(v)); }

void g(int v[])
{  printf("Função g() : Dimensão de v=%lu Bytes\n", sizeof(v)); }

int main()
{
   int v[10];
   int x[MAX];
   f(v);   g(v);

   puts("*****");
   f(x); g(x);

   return 0;

}
