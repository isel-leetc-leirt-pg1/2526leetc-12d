#include <stdio.h>

#define NAME "LUIS"  // Coloque o seu primeiro nome entre aspas (sem ;)

int main() {
  char lastName[30] = "Damas"; // Coloque o seu apelido entre aspas
  int studentNumber = 54321;   // Coloque o valor numérico do seu número de aluno 
  char someLetter = 'A';

  printf("Olá, eu sou o %s %s. ", NAME, lastName);
  printf("O meu número é: %c%d\n", someLetter, studentNumber);

  printf("Adoro programar em \"%c\"\n", someLetter+2);
  return 0;
}
