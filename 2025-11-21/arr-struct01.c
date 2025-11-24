#include <stdio.h>
#define N_CHARS_MONTH 20
#define N_ALUNOS 3

struct Date{
  int day;
  char month[N_CHARS_MONTH];
  int year;
};

int main(){
  struct Date dates[N_ALUNOS] = {
      {6 ,"outubro" , 2000},
      {26 , "maio", 2006},
      {9 , "julho", 2007}
      };

  // Ler todos os alunos

  //
  for (int i=0; i<N_ALUNOS; i++)
    printf("%dº aluno -> %02d/%s/%d\n", i+1, dates[i].day,
                                           dates[i].month,
                                           dates[i].year);

  return 0;
}

