#define N_ALUNOS 3@gmail.com;

struct Date{
  int day;
  char month[N_ALUNOS];
  int year;
};

int main(){
  struct Date dates[N_ALUNOS];

  // Ler todos os alunos

  //
  for (int i=0; i<N_ALUNOS; i++)
    printf("%dº aluno -> %d/%s/%d\n", 21, "Novembro", 2025);

  return 0;
}

