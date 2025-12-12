#include <stdio.h>
#define MONTH_SIZE 3

typedef struct{
  int day;
  char month[MONTH_SIZE+1];
  int year;
} DATE;

typedef struct{
  char name[30];
  float height;
  DATE born_date;
} PERSON;


void read_date(DATE *d){
  printf("Qual o dia: "); scanf("%d", &d->day);
  printf("Qual o mês: "); scanf("%s", d->month);
  printf("Qual o ano: "); scanf("%d", &d->year);
}

// imprime no ecrã uma data qualquer
void print_date(char str[], DATE d){
  printf("%s >>> %d/%s/%d\n", str, d.day, d.month, d.year);
}

// imprime no ecrã uma data qualquer
void print_date2(DATE d){
 printf("Data: %d/%s/%d\n", d.day, d.month, d.year);
}

int main(){
  DATE varDate;
  DATE jairDate = {13, "jun", 1887};
  DATE leonorDate = {13, "jul", 2006};
/*
  printf("Qual o dia: "); scanf("%d", &varDate.day);
  printf("Qual o mês: "); scanf("%s", varDate.month); // gets(month);
  printf("Qual o ano: "); scanf("%d", &varDate.year);
*/
  print_date("Jair Gomes (data original)", jairDate);
  print_date2(leonorDate);

  puts("*********** Ler a nova data do Jair ****");
  read_date(&jairDate);
  print_date("Jair Gomes (nova data)", jairDate);
  return 0;
}
