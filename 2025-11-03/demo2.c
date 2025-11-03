#include <stdio.h>
#include <string.h>

// Insere o ch a seguir a cada char na string
// Exemplos:
//      char s[100]="IseL";
//      strInsert(s, '@')
// Depois de executar a função puts(s) tem de escrever <<<I@s@e@L@>>>>

void strInsertBadImplementation(char s[], int ch) {
  char aux[10462736284];
  int i;
  for (i=0; s[i]!='\0'; i++)
  {
     aux[2*i]=s[i];
     aux[2*i+1]=ch;
  }
  aux[2*i]='\0';
  strcpy(s, aux);
}

void strInsert(char s[], int ch) {
  int fim = strlen(s);
  s[2*fim]='\0';

  for (fim--; fim>=0; fim--)
  {
     s[2*fim]=s[fim];
     s[2*fim+1]=ch;
  }
}


int main(){

  char str[100];
  while(1) {
    printf("Intro. uma string: ");
    gets(str);
    if(str[0]=='\0') break;

    printf("String original: |%s|", str);
    strInsert(str, '@');
    printf("\tString final: |%s|\n", str);

  }


   printf("Antes  da chamada à função str=|%s|\n", str);
   strInsert(str, '@');
   printf("Depois da chamada à função str=|%s|\n", str);

  return 0;
}
