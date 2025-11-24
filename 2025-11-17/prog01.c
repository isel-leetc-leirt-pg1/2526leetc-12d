#include <stdio.h>
#define NCHARS_MES 20
#define NCHARS_NOME 50
struct sData
 {
 int day;
 char month[NCHARS_MES+1];
 int year;
 };
struct sPerson
 {
 char name[NCHARS_NOME+1], last[NCHARS_NOME+1];
 struct sData birth_date;
 };
int main ()
{
 struct sPerson p;
 printf("Introduza o nome e apelido: ");
 scanf("%s %s", p.name, p.last);
 printf("Data de Nascimento dd MMM aaaa: ");
 scanf("%d %s %d", &p.birth_date.day, p.birth_date.month, &p.birth_date.year);

 puts("--------------------------------------------");
 printf("Caro(a) %s %s, sabemos que nasceu a %d de %s de %d.\n",
 p.name, p.last, p.birth_date.day, p.birth_date.month, p.birth_date.year);
}
