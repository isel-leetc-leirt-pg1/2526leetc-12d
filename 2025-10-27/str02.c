#include <stdio.h>
#define MAX_STR 100

char *my_strcpy(char dest[], const char src[]){
  int i;
  for (i=0; src[i]!='\0'; i++)
    dest[i] = src[i];

  dest[i]='\0';
  return dest;
}

int main()
{
  char s1[MAX_STR]="ola", s2[MAX_STR]="O amor é lindo";

  printf("Antes da cópia: s1=|%s| e s2=|%s|\n", s1, s2); getchar();
  my_strcpy(s2, s1);
  printf("Depois da cópia: s1=|%s| e s2=|%s|\n", s1, s2);

  return 0;
}
