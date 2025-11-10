#include <stdio.h>

struct date {
  int day, month, year;
};

// Lê e mostra uma data
int main(){
  struct date birth_date;
  printf("Introd. o dia mes e ano: ");
  scanf("%d %d %d", &birth_date.day, &birth_date.month, &birth_date.year);

  printf("Data Lida: %d/%d/%d\n", birth_date.day, birth_date.month, birth_date.year);
  return 0;
}
