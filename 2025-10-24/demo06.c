#include <stdio.h>
// devolve a dimensao util da string
void print_string(char s[]){
  int i=0;
  while (s[i]!='\0')
    putchar(s[i++]);

  putchar('\n');
}

int main()
{
  char nome[5];
  char apelido[100];

 printf("Nome: "); gets(nome);
 print_string("ALALALALALAL");
 print_string(nome);

return 0;
}
