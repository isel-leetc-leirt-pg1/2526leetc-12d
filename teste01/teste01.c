#include <stdio.h>
#include <string.h>
#include <ctype.h>


/*
[5] Realize a função void str_toggle(char str[]) que troca, na string str,
    as maiúsculas para minúsculas e as minúsculas para maiúsculas.

    Exemplo:
	char s1[] = "Hoje Realizamos o teste PG1";
    	str_toggle(s1);
    	printf("'%s'", s1); // apresenta no output: 'hOJE rEALIZAMOS O TESTE pg1'
*/

void str_toggle(char s[]) {
  for (int i=0; s[i]!=0; i++)
    if (isupper(s[i]))
      s[i] = tolower(s[i]);
    else
      if (islower(s[i]))
        s[i] = toupper(s[i]);
}


/*
[5] Realize a função void average_neg_pos(int arr[], int n_elems, int result[]) que calcula as médias (inteiras) dos valores negativos e positivos presentes no array arr (com dimensão indicada em n_elems). A média dos valores negativos deve ser colocada na primeira posição de result, 
    e a média dos valores positivos na segunda posição de result.

    Exemplo:
	int arr[] = { 1, -6, -4 , 5, 6, 2, 4, 6 }; // 8 elementos
	int result[2];
	averages_neg_pos(arr, 8, result)

  Após execução da função: result[2] = { -5, 4 } 
*/

void average_neg_pos(int arr[], int n_elems, int result[]) {
  int sumMinus=0, countMinus=0;
  int sumPlus=0, countPlus=0;

  for (int i=0; i<n_elems; i++)
    if (arr[i]<0)
      { sumMinus+=arr[i]; countMinus++;}
    else
      if (arr[i]>0)
        { sumPlus+=arr[i]; countPlus++;}

  result[0] = sumMinus/countMinus;
  result[1] = sumPlus/countPlus;
}

int main() {
  char s1[] = "Hoje Realizamos o teste PG1";
  str_toggle(s1);
  puts("'hOJE rEALIZAMOS O TESTE pg1'");
  printf("'%s'\n", s1); // apresenta no output: 'hOJE rEALIZAMOS O TESTE pg1'


  int arr[] = { 1, -6, -4 , 5, 6, 2, 4, 6 }; // 8 elementos
  int result[2];
  average_neg_pos(arr, 8, result);
  printf("{ -5, 4 }\n");
  printf("{ %d, %d }\n", result[0], result[1]);
  return 0;
}
