#include <stdio.h>
#include <ctype.h>

void print_str_stats(const char s[]){
  int countUppers, countLowers, countDigits, countOthers;
  countUppers = countLowers = countDigits = countOthers = 0;

  for (int i=0; s[i]!='\0'; i++)
    if (isupper(s[i]))
      countUppers++;
    else
       if (islower(s[i]))
         countLowers++;
       else
         if (isdigit(s[i]))
           countDigits++;
         else
           countOthers++;

  printf("Maiusculas %d\n", countUppers);
  printf("Minusculas %d\n", countLowers);
  printf("Digitos    %d\n", countDigits);
  printf("Outros     %d\n", countOthers);
}

int main(){
  char str[1000];
  printf("Introd. uma string: "); gets(str);
  print_str_stats(str);
  return 0;
}
