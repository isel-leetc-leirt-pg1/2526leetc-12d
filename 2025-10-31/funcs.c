#include <stdio.h>
#include <ctype.h>

// Recebe uma string e mantém apenas os caracteres em maiusculas
//
// Exemplo:
//    char nome[100] = "Ana R. Silva D'Orey"
// Depois da chamada à funcao
//     nome teria de ser igual a "ARSDO"
void strOnlyUpper(char str[]){
  int i, j;
  for (i=j=0; str[i]!='\0'; i++)
    if (isupper(str[i]))
      str[j++]=str[i];
  str[j]='\0';
}

int main(){
  char nome[100] = "Ana R. Silva D'Orey";
  printf("Antes da função  |%s|\n", nome);
  strOnlyUpper(nome);
  printf("Depois da função |%s|\n", nome);  // "ARSDO"
  return 0;
}
