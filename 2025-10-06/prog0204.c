#include <stdio.h>

int main()
{
  char ch;
  printf("Introd. um char: ");
  scanf("%c", &ch);

  if (ch=='a' || ch=='e' || ch == 'i' || ch=='o' || ch=='u' ||
      ch=='A' || ch=='E' || ch == 'I' || ch=='O' || ch=='U')
    puts("É vogal");
  else
    puts("Não é vogal");

  return 0;
}