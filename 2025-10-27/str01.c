#include <stdio.h>
#define MAX_STR 100

// Imprime a string e coloca um \n no final
void print_string(char s[]){
  int i=0;
  while (s[i]!='\0')
    putchar(s[i++]);

  putchar('\n');
}

// int my_strlen(const char *s){
int my_strlen(const char s[])
{
  int i;
  i=0;
  while(s[i]!='\0')
    ++i;

  return i;
}

// int my_strlen(const char *s){ com ciclo for
int my_strlen_for(const char s[])
{
  int i;
  for (i=0 ; s[i]!='\0'; ++i)
               ;

  return i;
}

int main()
{
  char mystr[MAX_STR];
  do
  {
     printf("Introduza uma string (String vazia para terminar): "); 
     gets(mystr); // scanf("%s", mystr);
     printf("str|%s| len while=%d len for=%d\n", mystr, my_strlen(mystr), my_strlen_for(mystr));
  }
  while(mystr[0]!='\0');

  return 0;
}
