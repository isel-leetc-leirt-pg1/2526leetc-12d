#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

#define MAX_STR 100

int my_strcmp(const char s1[], const char s2[]) {
  int i;
  for (i=0; s1[i]==s2[i] && s1[i]!='\0'; i++)
    ;
  return s1[i]-s2[i];
/*
  if (s1[i]=='\0' && s2[i]=='\0')
    return 0;
  if (s1[i]<s2[i])
    return -4000;
  return 1243654;
*/
}

// Compara 2 strings com ignore case
// Retorna 0  - Se forem iguais ignorando maiusculas e minusculas
//         <0 - Se s1 for alfabeticamente menor que s2 (ignore case)
//         >0 - Caso contrário
int my_strcmp_ignore_case(const char s1[], const char s2[]) {
  int i;
  for (i=0; tolower(s1[i])==tolower(s2[i]) && s1[i]!='\0'; i++)
    ;
  return tolower(s1[i])-tolower(s2[i]);
}

int isCapicua(const char s[]) {
  char aux[MAX_STR]="123456789";
  int ini, fim;

  printf("Antes da copia invertida: aux=|%s| s=|%s|", aux, s);

  for (ini =0, fim=strlen(s)-1 ; fim>=0 ; ini++, --fim)
    aux[ini] = s[fim];
  aux[ini] = '\0';

  printf("\tDepois: aux=|%s|  --> ", aux);
  return my_strcmp_ignore_case(s, aux)==0;
}


int main(){
  char s1[100], s2[100];

  strcpy(s1, "ola"); strcpy(s2, "ola");
  printf("Comparar |%s| com |%s| --> %d\n", s1, s2, my_strcmp(s1, s2));

  strcpy(s1, "ola"); strcpy(s2, "ole");
  printf("Comparar |%s| com |%s| --> %d\n", s1, s2, my_strcmp(s1, s2));

  strcpy(s1, "ola"); strcpy(s2, "olas");
  printf("Comparar |%s| com |%s| --> %d\n", s1, s2, my_strcmp(s1, s2));

  strcpy(s1, "oli"); strcpy(s2, "ole");
  printf("Comparar |%s| com |%s| --> %d\n", s1, s2, my_strcmp(s1, s2));

  strcpy(s1, "olas"); strcpy(s2, "ola");
  printf("Comparar |%s| com |%s| --> %d\n", s1, s2, my_strcmp(s1, s2));




  strcpy(s1, "ola"); strcpy(s2, "ola");
  printf("Comparar |%s| com |%s| --> %d\n", s1, s2, my_strcmp_ignore_case(s1, s2));

  strcpy(s1, "Ola"); strcpy(s2, "ole");
  printf("Comparar |%s| com |%s| --> %d\n", s1, s2, my_strcmp_ignore_case(s1, s2));

  strcpy(s1, "ola"); strcpy(s2, "Olas");
  printf("Comparar |%s| com |%s| --> %d\n", s1, s2, my_strcmp_ignore_case(s1, s2));

  strcpy(s1, "oli"); strcpy(s2, "OLe");
  printf("Comparar |%s| com |%s| --> %d\n", s1, s2, my_strcmp_ignore_case(s1, s2));

  strcpy(s1, "OLas"); strcpy(s2, "ola");
  printf("Comparar |%s| com |%s| --> %d\n", s1, s2, my_strcmp_ignore_case(s1, s2));

  return 0;
}

int main2(){

  printf("É capicua??? %d\n", isCapicua("Sugus"));  // Sugus Sugus 0
  printf("É capicua??? %d\n",isCapicua("Amor"));   // Amor romA    0
  printf("É capicua??? %d\n",isCapicua("Aa"));     // Aa aA        0
  printf("É capicua??? %d\n",isCapicua("X"));      // X X          1
  printf("É capicua??? %d\n",isCapicua("aa"));     // aa aa        1
  printf("É capicua??? %d\n",isCapicua(""));       //              1
  printf("É capicua??? %d\n",isCapicua("acBca"));  // acBca acBca  1

  printf("É capicua??? %d\n",isCapicua("qwertyuiopasdfghjkkjhgfdsapoiuytrewq")); 
  return 0;
}
