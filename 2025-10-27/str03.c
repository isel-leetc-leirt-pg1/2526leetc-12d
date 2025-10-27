#include <stdio.h>
#define MAX_STR 100

// int my_strlen(const char *s){ com ciclo for
int my_strlen(const char s[])
{
  int i;
  for (i=0 ; s[i]!='\0'; ++i)
               ;

  return i;
}

char *my_strcpy(char dest[], const char src[]){
  int i;
  for (i=0; src[i]!='\0'; i++)
    dest[i] = src[i];

  dest[i]='\0';
  return dest;
}

char *my_strcat(char dest[], const char src[]){
  int i,j;
  for(i=0, j=my_strlen(dest); src[i]!='\0'; i++, j++)
    dest[j] = src[i];

  dest[j]='\0';

  return dest;
}


int main()
{
  char s1[100]="Ana", s2[]="Maria", s3[]="Silva";
  my_strcat(s1, s2);
  printf("%s\n",s1); /* AnaMaria */

  my_strcat(s1, " ");
  my_strcat(s1, s3);
  printf("%s\n",s1); /* AnaMaria<ESPACO>Silva */



  // Quero que apareça "AnaMaria<ESPACO>Silva"

  return 0;
}
