#include <stdio.h>
#include <ctype.h>

#define N_CHARS ('z'-'a'+1)

void array_inic(int arr[], int n, int value) {
  for (int i=0; i<n; i++)
    arr[i] = value;
}

void array_print(int arr[], int n) {
  for (int i=0; i<n; i++)
    printf("Contagem de [%c] --> %d ocorrências\n", 'a'+i, arr[i]);
}


void linha(int n, char ch){
  for (int i=0; i<n; i++)
    putchar(ch);
  putchar('\n');
}

void array_hist(int arr[], int n, int maxCount) {
  for (int i=0; i<n; i++) {
    printf("[%c] --> Occ=%d ", 'a'+i, arr[i]);
    linha((int) (arr[i]*60.0/maxCount), '*');
  }
}

int array_max(int arr[], int n){
  int res=arr[0];
  for (int i=1; i<n; i++)
    if (arr[i]>res) res = arr[i];

  return res;
}


int main() {
  int ch;
  int counter[N_CHARS];

  array_inic(counter, N_CHARS, 0);

  while ((ch=fgetc(stdin))!=EOF)
    if (ch>='a' && ch<='z' || ch >='A' && ch <= 'Z'){
      int index = tolower(ch)-'a';
      counter[index]++;
  }

  array_print(counter, N_CHARS);
  array_hist(counter, N_CHARS, array_max(counter, N_CHARS));
  return 0;
}
