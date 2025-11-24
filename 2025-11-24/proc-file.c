#include <stdio.h>
#define FILENAME "texto.txt"

int main(){
  FILE *fp;
  FILE *fout;

  int ch;
  int conta=0;

  fp = fopen(FILENAME, "r");
  if (fp==NULL) {
    printf("Impossivel abrir o ficheiro [%s]\n", FILENAME);
    return 5;
  }

  fout = fopen("resultado.txt", "w");
  if (fout==NULL) {
    printf("Impossivel criar o ficheiro [%s]\n", "resultado.txt");
    return 3;
  }

  while( (ch = fgetc(fp)) != EOF){
    putchar(ch);
    conta++;
  }

  fprintf(fout, "Nº de chars: %d\n", conta);

  fclose(fout);
  fclose(fp);
  return 0;
}
