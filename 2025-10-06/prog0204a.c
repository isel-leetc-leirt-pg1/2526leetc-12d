#include <stdio.h>

int main()
{
  char ch;
  printf("Introd. um char: ");
  scanf("%c", &ch);

  switch(ch)
  {
    case 'a': 
    case 'A': 
    case 'e': 
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U': puts("É vogal"); break;
    default:  puts("Não é vogal");
  }

  return 0;
}