#include <stdio.h>
#define MAX_STR 100

int my_strcmp (const char str1[], const char str2[]){
  int i;
  for(i=0; str1[i]==str2[i]; i++)
    if (str[i]
}

int main()
{
  char all[MAX_STR]="All->", other[MAX_STR];
  do {
    printf("Introd. uma string: "); gets(other);
    my_strcat(all, " ");
    my_strcat(all, other);
    printf("All=|%s|\n", all);
  }
  while (other[0]!='\0');
  return 0;
}
