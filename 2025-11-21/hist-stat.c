#include <stdio.h>
#include <ctype.h>

#define N_CHARS ('z'-'a'+1)
#define HIST_MAX_CHARS 60.0

typedef struct {
  int count;
  unsigned char letter;
} letter_t;

void array_inic(letter_t arr[], int n, int value) {
  for (int i=0; i<n; i++) {
    arr[i].letter = 'a'+i;
    arr[i].count = value;
  }
}

void array_print(letter_t arr[], int n) {
  for (int i=0; i<n; i++)
    printf("Contagem de [%c] --> %d ocorrências\n", arr[i].letter, arr[i].count);
}


void linha(int n, char ch){
  for (int i=0; i<n; i++)
    putchar(ch);
  putchar('\n');
}

void array_hist(letter_t arr[], int n, int maxCount) {
  for (int i=0; i<n; i++) {
    printf("[%c] --> Occ=%-4d ", arr[i].letter, arr[i].count);
    double dim_barra = (arr[i].count*(HIST_MAX_CHARS/maxCount));
    if (dim_barra!=0.0) 
      if (dim_barra<1) dim_barra=1.0;

    linha((int) dim_barra, '*');
  }
}

int array_max(letter_t arr[], int n){
  int res=arr[0].count;
  for (int i=1; i<n; i++)
    if (arr[i].count>res) res = arr[i].count;

  return res;
}


int main() {
  int ch;
  letter_t counter[N_CHARS];

  array_inic(counter, N_CHARS, 0);

  while ((ch=fgetc(stdin))!=EOF)
    if (ch>='a' && ch<='z' || ch >='A' && ch <= 'Z'){
      int index = tolower(ch)-'a';
      counter[index].count++;
  }

  array_print(counter, N_CHARS);
  array_hist(counter, N_CHARS, array_max(counter, N_CHARS));
  return 0;
}
