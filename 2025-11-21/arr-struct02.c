#include <stdio.h>
#define N_CHARS_MONTH 20
#define N_ALUNOS 3

typedef struct{
  int day;
  char month[N_CHARS_MONTH];
  int year;
} DATE;

void print_birht_dates(DATE v[], int n_elem){

  for (int i=0; i<n_elem ; i++)
    printf("%dº aluno -> %02d/%s/%d\n", i+1, v[i].day,
                                           v[i].month,
                                           v[i].year);
}

int main(){
  DATE dates[N_ALUNOS];

  // Ler todos os alunos
  for (int i=0; i<N_ALUNOS; i++)
  {
      printf("Data de nascimento do %dº aluno: ", i+1);
      scanf(" %d", &dates[i].day);
      scanf("%s", dates[i].month);
      scanf(" %d", &dates[i].year);
  }

  print_birht_dates(dates, N_ALUNOS);
  fflush(stdin);
  getchar();
  return 0;
}

