#include <stdio.h>

#define MAX_STR 20
typedef int INTEIRO;

typedef struct{
  int day;
  char month[MAX_STR];
  int year;
} DATE;

typedef struct {
  char first_name[MAX_STR];
  char last_name[MAX_STR];
  double height;
  DATE born_date;
} PERSON;

// Lê e mostra uma data
int main(){
  DATE birth_date = {25, "Dez", 1999};

  printf("Antes da leitura: %d/%s/%d\n", birth_date.day, birth_date.month, birth_date.year);

  printf("Introd. o dia mes e ano: ");
  scanf("%d %s %d", &birth_date.day, birth_date.month, &birth_date.year);

  printf("Data Lida: %d/%s/%d\n", birth_date.day, birth_date.month, birth_date.year);


  PERSON fulano = {"Leonor", "Diogo", 1.67, { 15, "Março", 1845} };
  printf("A pessoa tem os dados: Nome: %s %s Altura: %lf Data: %d-%s-%d\n", fulano.first_name,
                                               fulano.last_name, 
                                               fulano.height,
        fulano.born_date.day, fulano.born_date.month, fulano.born_date.year
 );
  return 0;
}
